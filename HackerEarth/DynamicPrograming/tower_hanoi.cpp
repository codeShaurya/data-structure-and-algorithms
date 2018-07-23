#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int m=1e4+5;
const int mod=1e9+7;

vector< pair <int, int>> v ;

bool comp(pair<int ,int> a,pair<int ,int> b)
{
 return a.first<b.first;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a,b;
		for (int i = 0; i < n; ++i){
			cin>>a>>b;
			v.push_back({a,b});
		}
		sort(v.begin(),v.end(),comp);
		// for (int i = 0; i < n; ++i)
		// 	cout<<v[i].first<<" "<<v[i].second<<endl;
		int h=0;
		int pre=0;
		for (int i = n-1; i >=0; --i)
		{
			pre=h;
			if(h<v[i].second)
				h=v[i].second;
			else{
				if(pre!=0){
					if(v[i].second <= v[i-1].second)
						h=h+v[i].second;
					else
						h=h+v[i].second-v[i-1].second;
				}
			}
		}
		cout<<h;
	}
	return 0;
}