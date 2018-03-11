#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector < pair < int, string > > hashTable[7000];

ll hashFunction(ll n){
	return n%3727;
}


int main(){
	ll n,q,roll,a;
	string name;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>roll>>name;
		ll j=hashFunction(roll);
		hashTable[j].push_back({roll,name});
	}
	cin>>q;
	for (int i = 0; i < q; ++i){
		cin>>a;
		ll j= hashFunction(a);
		for (int i = 0; i < hashTable[j].size(); ++i){
			if(hashTable[j][i].first == a){
				name=hashTable[j][i].second;
				break;
			}
		}
		cout<<name<<endl;
	}
	return 0;
}