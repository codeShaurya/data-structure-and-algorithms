#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> PII;

priority_queue <ll, vector<ll>, greater<ll> > pq;

ll _minCost(ll n){
	ll cost = 0,b,a;
	while(!pq.empty()){
		a = pq.top();
		pq.pop();
		if(!pq.empty())
			b = pq.top();
		else{
			b = 0;
			break;
		}
		pq.pop();
		pq.push(a+b);
		cost += a + b;
	}

	return cost;
}

int main(){
	ll t,n,b;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i){
			cin>>b;
			pq.push(b);
		}
		ll ans = _minCost(n);
		cout<<ans<<endl;
	}
	return 0;
}