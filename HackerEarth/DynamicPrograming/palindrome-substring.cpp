#include <bits/stdc++.h>
using namespace std;

string isPrime(int n){
	if(n==0 || n==2)
		return "PRIME";
	if(n==1)
		return "NOT PRIME";
	for(int i=2; i*i<=n;i++)
	{
		if(n%i==0)
			return "NOT PRIME";
	}
	return "PRIME";
}

int main(){

	string s;
	int t;
	cin>>t;
	while(t--){
		int maxLength=0;
		cin>>s;
		int temp=0;
		int l= s.length();
		for (int i = 0; i < l; ++i)
		{
			temp=1;
			int j=i+1;
			int k=i-1;
			while(s[j]==s[k]){
				temp=temp+2;
				k--;
				j++;
				if(k<0 || j>=l)
					break;
			}
			if(temp>maxLength)
				maxLength=temp;
			temp=0;
			j=i;
			k=i+1;
			while(s[j]==s[k]){
				temp=temp+2;
				k++;
				j--;
				if(k<0 || j>=l)
					break;
			}
			if(temp>maxLength)
				maxLength=temp;	
		}
		cout<<isPrime(maxLength)<<endl;
	}
	return 0;
}