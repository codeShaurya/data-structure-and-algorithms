#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int hashTable[300];
vector< pair<int ,char> > ve;
vector< pair<int ,char> > vec;

bool sortbysec(const pair<int,char> &a,const pair<int,char> &b)
{
	return (a.second - ' ' < b.second - ' ');
}

int main(){
	int v;
	string r;
	getline(cin,r);

	for (int i = 0; i < 298;i++){
		hashTable[i]=0;
	}

	for (int i = 0; i < r.length(); ++i){
		v = r[i]-' ';
		hashTable[v] += 1;
	}
	for (int i = 0; i < 298; ++i)
		ve.push_back(make_pair(hashTable[i],i+' '));

	sort(ve.begin(),ve.end());	
	int ans =ve[297].first;
	int i=297;

	while(ve[i].first == ans){
		vec.push_back({ve[i].first,ve[i].second});
		i--;
	}
	sort(vec.begin(),vec.end(),sortbysec);
	// for (int j = 0; j < 297-i; ++j){
	// 	cout<<vec[j].second<<" "<<vec[j].first<<endl;
	// }
	cout<<vec[0].second<<" "<<vec[0].first<<endl;

	return 0;
}



/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/
*/