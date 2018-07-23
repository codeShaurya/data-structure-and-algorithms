#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll prim[1000],muli[10000];

ll minEle(ll t){
	ll min = INT_MAX;
	for (int i = 1; i <= t; ++i){
		if(muli[i]<min)
			min = muli[i];
	}
	return min;
}

set< ll > ugli;

int main(){
	ll n,t;
	cin>>t>>n;
	for (int i = 1; i <= t; ++i){
		cin>>prim[i];
	}

	for (int i = 1; i <= t; ++i){
		muli[i]=prim[i];
	}

	ugli.insert(1);
	while(ugli.size()<n){
		ll ugly = minEle(t);
		ugli.insert(ugly);

		for(ll i=1;i<=t;i++){
			if(ugly == muli[i])
				muli[i] = muli[i]*prim[i];
		}
	}

	set<ll>::iterator it = ugli.end();
	it--;
	cout<<*it<<endl;

	return 0;
}