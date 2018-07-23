#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll m=1e5+1;
ll hashTable[m],hashTable1[m],hashTable3[m];

int main(){

	ll q,l1,r1,l2,r2,l;
	string s;
	cin>>s;
	l=s.length();
	hashTable[0]=0;
	hashTable[1]=(s[0]-'a')*97;
	for (int i = 2; i <= l; ++i){
		hashTable[i]=hashTable[i-1]+(s[i-1]-'a')*97;
	}

	hashTable1[1]=(s[0]-'a')*199;
	for (int i = 2; i <= l; ++i){
		hashTable1[i]=hashTable1[i-1]+(s[i-1]-'a')*199;
	}

	hashTable3[1]=(s[0]-'a')*499;
	for (int i = 2; i <= l; ++i){
		hashTable3[i]=hashTable3[i-1]+(s[i-1]-'a')*499;
	}

	cin>>q;
	while(q--){
		cin>>l1>>r1>>l2>>r2;
		ll f1 = hashTable[r1]-hashTable[l1-1];
		ll s1 = hashTable[r2]-hashTable[l2-1];
		ll f2 = hashTable1[r1]-hashTable1[l1-1];
		ll s2 = hashTable1[r2]-hashTable1[l2-1];
		ll f3 = hashTable3[r1]-hashTable3[l1-1];
		ll s3 = hashTable3[r2]-hashTable3[l2-1];

		if(r1-l1 == r2-l2){
			if(f1==s1){
				if(f2==s2){
					if(s3==f3)
						cout<<"Yes"<<endl;
					else 
						cout<<"No"<<endl;
				}
				else
					cout<<"No"<<endl;
			}
			else
				cout<<"No"<<endl;
		}
		else cout<<"No"<<endl;
	}
	return 0;
}


/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/shubham-and-subarrays-325b1e73/
*/