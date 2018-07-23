#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mem[105][105];
string r,s;
char a[105];

ll dp(ll m,ll n){
	if(m <0)
		return 0;
	if(n <0)	
		return 0;
	if(mem[m][n]!= -1)
		return mem[m][n];
	if(r[m]==s[n])
		return mem[m][n]= 1+dp(m-1,n-1);
	else
		return mem[m][n] =max(dp(m-1,n),dp(m,n-1));
}


void dp_ans(ll m ,ll n){
	
	ll index=mem[m-1][n-1];
	// a[index]='\0';
	ll i=m-1,j=n-1;
	while(i>=0&&j>=0){
		if(r[i]==s[j]){
			a[index-1]=r[i];
			j--;
			i--;
			index--;
		}
		else if(mem[i-1][j]>mem[i][j-1]){
			i--;
		}
		else{
			j--;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	ll m,n;
	cin>>t;
	while(t--){
		cin>>m>>n;
		cin>>r>>s;
		memset(mem,-1,sizeof(mem));

		ll ans= dp(m-1,n-1);
		dp_ans(m,n);
		for (ll i = 0; i < ans; ++i)
			cout<<a[i];
		cout<<endl;

	}
	return 0;
}	


/*
1
6
6
ABCDGH
AEDFHR
*/