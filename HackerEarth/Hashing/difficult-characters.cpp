#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <pair<ll ,char>> hashTable;

bool comp(const pair<ll,char> &a, const pair<ll,char> &b)
{
	if(a.first == b.first)
		return a.second-'a' > b.second-'a';
	return (a.first < b.first);
}

int main(){
	ll t,l;
	string s,st;
	st="abcdefghijklmnopqrstuvwxyz";
	cin>>t;

	while(t--){
		cin>>s;
		l=s.length();
		hashTable.clear();
		
		for (ll i = 0; i < 26; ++i)
			hashTable.push_back({0,st[i]});		

		for (ll i = 0; i < l; ++i){
			ll x=s[i] -'a';
			hashTable[x].first +=1 ;
		}
		sort(hashTable.begin(),hashTable.end(),comp);

		for (ll i = 0; i < 26; ++i){
			cout<<hashTable[i].second<<" ";
		}
		cout<<endl;
	}
	return 0;
}



/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/difficult-characters/
*/