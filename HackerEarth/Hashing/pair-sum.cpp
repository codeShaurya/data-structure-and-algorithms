#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m=2*1e6;
const ll n=1e6+5;
ll a[n];
bool c[m];

int main(){
	ll n,k;
	bool ans=false;
	cin>>n>>k;
	memset(c,false,sizeof(c));

	for (int i = 0; i < n; ++i){
		cin>>a[i];
		if(c[k-a[i]] && (k-a[i]>=0))
			ans=true;
		if(k-a[i] >0)
			c[a[i]]=true;
	}
	if(ans)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;

	return 0;
}



/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/
*/