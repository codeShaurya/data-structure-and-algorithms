#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FOR0(n, x) for(ll x = 0; x < n; x++)
#define FOR1(n, x) for(ll x = 1; x <= n; x++)
#define FORR0(n, x) for(ll x = n-1; x >= 0; x--)
#define FORR1(n, x) for(ll x = n; x > 0; x--)
#define P_ARR(a, s, e) for(ll i = s; i < e; i++) cout<<a[i]<<" ";

const int m = 1e6;
vector< pair < int, int > > v ;
int sum[m];

ll _get_platform(ll n){
	sum[0] = 0;
	FOR1(n,i){
		if(v[i].second == 0){
			sum[i] = sum[i-1] + 1;
		}
		else{
			sum[i] = sum[i-1] - 1;
		}
	}

	// P_ARR(sum, 1, n+1);

	sort(sum, sum + n + 1);
	return sum[n];
}

int main(){
	ll t, n, a;
	cin>>t;
	
	while(t--){
		cin>>n;
		v.clear();
		v.push_back({0,-1});
		FOR0(n,i){
			cin>>a;
			v.push_back({a,0});
		}
		FOR0(n,i){
			cin>>a;
			v.push_back({a,1});
		}

		sort(v.begin(), v.end());

		// FOR1(n+n,i)
		// cout<<v[i].second<<" "<<v[i].first<<endl;
		
		ll  ans = _get_platform(2*n);
		cout<<ans<<endl;
	}

	return 0;
}