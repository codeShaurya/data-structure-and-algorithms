#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll mem[105][105];
string r,s;

ll dp(ll m,ll n){
	if(m <0)
		return 0;
	if(n <0)	
		return 0;
	if(mem[m][n]!= -1)
		return mem[m][n];
	cout<<r[m]<<s[n];
	if(r[m]==s[n])
		return mem[m][n]= 1+dp(m-1,n-1);
	else
		return mem[m][n] =max(dp(m-1,n),dp(m,n-1));
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	int m,n;
	cin>>t;
	while(t--){
		cin>>m>>n;
		cin>>r>>s;
		memset(mem,-1,sizeof(mem));

		ll ans= dp(m-1,n-1);
		cout<<ans<<endl;
	}
	return 0;
}