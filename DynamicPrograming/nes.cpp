#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll m=1e6;
ll phi[m];
ll an[m];

void ETF(ll n){
	for (ll i = 0; i <= n; ++i)
		phi[i]=i;
	for (ll i = 2; i <= n; ++i)
	{
		if(phi[i]==i){
			for (ll j = i; j <=n; j=j+i)
			{
				phi[j]=(phi[j]*(i-1))/i;
			}
		}
	}
}

int  main(){
	ll n,t;
	cin>>t;
	ETF(1000000);
	an[1] = 2;
	for (ll i = 2; i <= 1000000; ++i){
		an[i] = an[i-1] + phi[i];
	}
	while(t--){
		cin>>n;
		cout<<an[n]<<endl;
	}
	return 0;
}