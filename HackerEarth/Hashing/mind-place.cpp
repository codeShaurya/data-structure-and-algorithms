#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <pair< ll, pair<ll ,ll>> > hashTables;

bool sortbysec(const pair<ll,pair<ll,ll>> &a,
	const pair<ll,pair<ll,ll>> &b){
	return (a.first < b.first);
}

pair <ll ,ll> search_ele(ll x,ll s, ll e){
	if(s>=e)
		return {-1,-1};
	if (e > s){
		ll mid = s+(e-s)/2;

		if (hashTables[mid].first == x)  
			return hashTables[mid].second;

		else if (hashTables[mid].first > x) 
			return search_ele(x , s, mid);
		else
	     	return search_ele(x , mid+1 , e);
	}
}

int main(){
	ll m,n,q,x,t;
	cin>>n>>m;
	for (ll i = 0; i < n; ++i){
		for (ll j = 0; j < m; ++j){
			cin>>t;
			hashTables.push_back({t,{i,j}});
		}
	}
	sort(hashTables.begin(),hashTables.end(),sortbysec);
	// for (ll i = 0; i < m*n; ++i){
	// 		cout<<hashTables[i].first<<" "<<hashTables[i].second.first<<" "<<hashTables[i].second.second<<endl;
	// }

	cin>>q;
	for (ll i = 0; i < q; ++i){
		cin>>x;
		//code goes here binary search
		pair<ll ,ll > p = search_ele(x,0,m*n-1);
		cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;
}
