#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int m=1e6;
ll a[m];

void swap(ll *a,ll *b){
	ll temp= a;
	a=b;
	b=temp;
}


ll kthSmallest(ll n, ll k){
    MinHeap mh(arr, n);
 
    for (int i=0; i<k-1; i++)
        mh.extractMin();
 
    return mh.getMin();
}

int main(){
	int n,k;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
		cin>>a[i];

    cout << "kthSmallest number is : "<< kthSmallest(n, k);
    return 0;
}