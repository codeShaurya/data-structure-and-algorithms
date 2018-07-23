#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector< pair<ll,pair<ll,ll> > >v;
bool s[1000];

bool comp(pair<ll,pair<ll,ll> > &a,pair<ll,pair<ll,ll> > &b){
	if(a.first < b.first)
		return false;
}

int main(){
	ll t,n,p,d,id;
	cin>>t;
	while(t--){
		cin>>n;
		ll pro=0,count=0;
		v.clear();
		for (int i = 0; i < n; ++i){
			cin>>id>>d>>p;
			v.push_back({p,{d,id}});
		}

		sort(v.begin(),v.end(),comp);
		memset(s,false,sizeof(s));

		// for (int i = 0; i < n; ++i){
		// 	cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
		// }

		for (int i = 0; i < n; ++i){
			for (int j = v[i].second.first-1; j>=0; j--){
				if(s[j]==false){
					pro += v[i].first;
					count++;
					s[j]=true;
					break;
				}
			}
		}
		cout<<count<<" "<<pro<<endl;
	}
	return 0;
}