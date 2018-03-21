#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector< pair<int, pair <int, int > > > v;

bool comp(const pair<int, pair <int, int >> & a,
          const pair<int, pair <int, int >> & b  ){
	if(a.second.first > b.second.first)
		return false;
}

int main(){
	int t,n,s;
	cout<<"Enter no. of jobs :";
	cin>>n;
	v.clear();
	cout<<"Enter start time of jobs :";
	for (int i = 0; i < n; ++i){
		cin>>s;
		v.push_back({s,{0,i}});
	}
	cout<<"\nEnter end time of jobs :";
	for (int i = 0; i < n; ++i){
		cin>>s;
		v[i].second.first = s;
	}

	sort(v.begin(),v.end(),comp);

	int i=0;
	cout<<"Job that can be done : ";
	cout<<"J"<<v[0].second.second<<" ";
	for(int j=1;j<n;j++){
		if(v[i].second.first <= v[j].first){
			cout<<"J"<<v[j].second.second<<" ";
			i=j;
		}
	}
	return 0;
}


/**
6
1 3 0 5  8 5
2 4 6 7 9 9
*/