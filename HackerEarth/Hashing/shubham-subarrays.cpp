#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pp pair<ll, ll>
#define ff first 
#define ss second 

ll temp[1005];

int main(){
	ll i, j, n, base[2], mod[2], a[1005], ans = 0;
	unordered_map<ll, bool> g;
	ll pwrs[2][1005];

	base[0] = 31;   mod[0] = 999999937;
	base[1] = 37;   mod[1] = 999999929;
	pwrs[0][0] = 1;
	pwrs[1][0] = 1;
	
	for(i = 1; i <= 1000; i++){
		pwrs[0][i] = ( pwrs[0][i - 1] * base[0]) % mod[0];
		pwrs[1][i] = ( pwrs[1][i - 1] * base[1]) % mod[1];
	}

	memset(temp,0,sizeof(temp));

	cin>>n;
	for(i = 0; i < n; i++)
		cin>>a[i];
	for(i = 0; i < n; i++){
		pp curr = {0, 0};
		for(j = i; j < n; j++){
			if(temp[a[j]] != 0)
				continue;
			temp[a[j]] = 1;
			curr.ff = (curr.ff + pwrs[0][a[j]]) % mod[0];
			curr.ss = (curr.ss + pwrs[1][a[j]]) % mod[1];
			if(g[( curr.ff << 10) + curr.ss] != 0)
				continue;
			ans++;
			g[( curr.ff << 10) + curr.ss] = 1;
		}
		for(j = i; j < n; j++)
			temp[a[j]] = 0;
	}

	cout<<ans<<endl;

	return 0;
}