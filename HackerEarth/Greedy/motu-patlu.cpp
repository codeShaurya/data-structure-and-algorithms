#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll t,n,a[100000];
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		ll m = 0, p = 0, pi = n-1, mi = 0;
		while( mi <= pi ){
			if(pi == mi){
				break;
			} else if( m <= 2*p) {
				while(m <= 2*p && mi <= pi){
					m += a[mi];
					mi++;
				}
			} else if(m > p){
				while( m > 2*p && mi <= pi){
					p += a[pi];
					pi--;
				}
			} else{}
		}

		ll motu = mi+1;
		ll patlu = n-pi-1;
		cout<<motu<<" "<<patlu<<endl;
	}

	return 0;
}

/*

3
5
2 6 2 1 7
4
15 2 1 3
5
2 4 12 4 7

*/