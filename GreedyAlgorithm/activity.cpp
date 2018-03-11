#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector< pair<int, pair <int, int >> > v;

bool comp(const pair<int, pair <int, int >> & a,
          const pair<int, pair <int, int >> & b  ){
	if(a.second.first < b.second.first)
		return true;
}

int main(){
	int t,n,s;
	cin>>t;
	while(t--){
		cin>>n;
		v.clear();
		for (int i = 0; i < n; ++i){
			cin>>s;
			v.push_back({s,{0,i+1}});
		}
		for (int i = 0; i < n; ++i){
			cin>>s;
			v[i].second.first = s;
		}

		sort(v.begin(),v.end(),comp);

		// for (int i = 0; i < n; ++i){
		// 	cout<<v[i].first<<" "<<v[i].second.first<<endl;
		// }

		// int i=0;
		// cout<<v[0].second.second<<" ";
		// for(int j=1;j<n;j++){
		// 	if(v[i].second.first <= v[j].first){
		// 		cout<<v[j].second.second<<" ";
		// 		i=j;
		// 	}
		// }
		// cout<<endl;
	}
	return 0;
}