#include<bits/stdc++.h>
using namespace std;

int a[1000],b[100000];

int main(){
	bool ans = false;
	int n,k,i,x;
	cout<<"Enter number of elements in the array and K : ";
	cin>>n>>k;
	cout<<"Now enter the elements of the array"<<endl;
	for(i=0;i<n;i++){
		cin>>x;
		a[x]++;
		if(a[x]>1)
			ans=true;
		b[i]=x;
	}
	for(;i<n;i++){
		a[b[i-k]]--;
		cin>>x;
		a[x]++;
		if(a[x]>1)
			ans=true;
		b[i]=x;
	}

	if(ans)
		cout<<"Duplicate found in the range of "<<k<<endl;
	else
		cout<<"No duplicate found in the range of "<<k<<endl;
	return 0;
}