#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll _MAX =  1000000007;
ll F[3][3], M[3][3];

void multiply(){
	M[0][0] = 1;
	M[0][1] = 1;
	M[1][0] = 1;
	M[2][2] = 0;

	ll x =  (F[0][0]*M[0][0])%_MAX + (F[0][1]*M[1][0])%_MAX;
	ll y =  (F[0][0]*M[0][1])%_MAX + (F[0][1]*M[1][1])%_MAX;
	ll z =  (F[1][0]*M[0][0])%_MAX + (F[1][1]*M[1][0])%_MAX;
	ll w =  (F[1][0]*M[0][1])%_MAX + (F[1][1]*M[1][1])%_MAX;

	F[0][0] = x%_MAX;
	F[0][1] = y%_MAX;
	F[1][0] = z%_MAX;
	F[1][1] = w%_MAX;
}

void powers(ll n){
	for (ll i = 2; i <= n; i++)
		multiply();
}

ll fib(ll n){
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	powers(n-1);

	return F[0][0];
}

int main(){
	ll n,t;
	cin>>t;
	while(t--){
		cin>>n;
		F[0][0] = 1;
		F[0][1] = 1;
		F[1][0] = 1;
		F[2][2] = 0;
		cout<<fib(n)%_MAX<<endl;
	}
	return 0;
}