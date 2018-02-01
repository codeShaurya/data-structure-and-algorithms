#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	string str;
	int s[3];
	cin>>t;
	while(t--){
		cin>>n;
		s[0]=s[1]=0;
		cin>>str;
		for (int i = 0; i < n; ++i){
			int index= str[i]-'0';
			s[index] +=1;
		}
		cout<<s[0]<<endl;
	}
	
	return 0;
}

/**
https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subham-and-binary-strings/
*/