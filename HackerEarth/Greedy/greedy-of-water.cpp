#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

priority_queue <ll, vector<ll>, greater< ll > > pq;

ll _max_bottle(ll n, ll x){
	ll c=0;
	while(!pq.empty()){
		ll cap = pq.top();
		pq.pop();
		if(cap <= x){
			c++;
			x -= cap;
		}
		else
			break;
	}
	return c;
}

int main(){
	ll t,n,a,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		while(!pq.empty())
			pq.pop();
		for (int i = 0; i < n; ++i){
			cin>>a;
			pq.push(a);
		}
		ll ans = _max_bottle(n,x);
		cout<<ans<<endl;
	}

	return 0;
}