#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int m = 1e6;

int a[m],s[m];

int main() {
	ll n,h;
	cin>>n>>h;
	s[0]= 0;
	a[0] = 0;
	int count = 0 ;
	for (int i = 1; i <= n; ++i){
		cin>>a[i];
	}
	
	sort(a,a+n+1);

	// for (int i = 1; i <= n; ++i){
	// 	cout<<a[i];
	// }


	for (int i = 1; i <= n; ++i){
		s[i] = s[i-1] +a[i];
	}

	// for (int i = 1; i <= n; ++i){
	// 	cout<<s[i];
	// }

	ll j = n;
	for (int i = n-1; i > 0; --i){
		if(s[i] > a[j]){
			
		}
		else{
			count++;
			j = i;

		}
	}
	cout<<count+1<<endl;

	return 0;
}
