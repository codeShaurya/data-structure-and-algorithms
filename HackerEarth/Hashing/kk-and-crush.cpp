#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <int> hashTable[10099];

ll hashFunction(ll n){
	return n%10096;
}


int main(){
	ll t,n,q,x,index,j;
	bool ans;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < 10099; ++i){
			hashTable[i].clear();
		}
		for (int i = 0; i < n; ++i){
			cin>>x;
			index = x+100001;
			j = hashFunction(index);
			hashTable[j].push_back(x);
		}
		cin>>q;
		for (int i = 0; i < q; ++i){
			cin>>x;
			index = x+100001;
			j = hashFunction(index);
			ans=false;
			for (int k = 0; k < hashTable[j].size(); ++k){
				if(hashTable[j][k] == x){
					ans=true;
					break;
				}
			}

			if(ans)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
	return 0;
}

/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/exists/
*/