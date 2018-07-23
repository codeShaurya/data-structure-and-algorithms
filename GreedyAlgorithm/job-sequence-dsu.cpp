#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> PII;
vector< pair<ll,PII> > v;
bool s[1000];

bool comp(pair<ll,PII > &a,pair<ll,PII > &b){
	if(a.first < b.first)
		return false;
}

int main(){
	ll t,n,a,b;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i){
			cin>>a>>b;
			v.push_back({b,{a,i+1}});
		}
		sort(v.begin(), v.end());
	}
	return 0;
}