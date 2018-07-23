#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define A_IN(a) cin>>a;
#define IN1(a) ll a; cin>>a;
#define IN2(a,b) ll a, b; cin>>a>>b; 
#define IN3(a,b,c) ll a, b, c; cin>>a>>b>>c; 
#define IN4(a,b,c,d) ll a, b, c, d; cin>>a>>b>>c>>d;
#define OU1(a) cout<<a<<" ";
#define OU2(a,b) cout<<a<<" "<<b; 
#define OU3(a,b,c) cout<<a<<" "<<b<<" "<<c; 
#define OU4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d;
#define FOR(n, s, e) for(ll x = s; x <= e; x++)
#define FORR(n, s, e) for(ll x = e; x >= s; x--)
#define P_ARR(a, s, e) for(ll i = s; i <= e; i++) cout<<a[i]<<" ";

const int m = 1e6;
int a[m];

void _merge_array(int s, int m, int e){
	return;
}

void _merge_sort(int s, int e){
	if(s > e){
		return;
	}
	cout<<"ge";

	int m = s + (e - s)/2;
	_merge_sort(s, m);
	// _merge_sort(m+1, e);
	// _merge_array(s, m, e);
}

int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];

	for (int i = 0; i < n; ++i)
		cout<<a[i];

	cout<<"After Sorting : ";
	_merge_sort(0,n-1);

	for (int i = 0; i < n; ++i)
		cout<<a[i];

	return 0;
}