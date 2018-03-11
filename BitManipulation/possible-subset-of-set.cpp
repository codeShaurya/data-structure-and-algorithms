#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n;
	char ch[20];
	cout<<"Enter the no. od element in set ";
	cin>>n;
	cout<<"Enter the element "<<endl;
	for (int i = 0; i < n; ++i)
		cin>>ch[i];
	for (int i = 0; i < (1<<n); ++i){
		for (int j = 0; j < n; ++j)
			if( i & (1<<j))
				cout<<ch[j]<<" ";
		cout<<endl;
	}
	
	return 0;
}