#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <pair<int,int> > hashTable;


int main(){
	ll n,t,d;
	cin>>n;
	for (int i = 1; i <= n; ++i){
		cin>>t>>d;
		hashTable.push_back({d+t,i});
	}
	sort(hashTable.begin(),hashTable.end());
	for (int i = 0; i < n; ++i){
		cout<<hashTable[i].second<<" ";
	}
	return 0;
}



/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/aman-and-lab-file-work-8cd1d24c/
*/