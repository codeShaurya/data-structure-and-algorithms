#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum=0;
	while(1){
		cout<<"\nEnter the value of n: ";
		cin>>n;

		for(int i=1;i<n;i++)
		{
			if(n%i==0)
				sum=sum+i;
		}
		if(sum==n)
			cout<<n<<" is the sum of all its divisors";
		else
			cout<<n<<" is not the sum of all its divisors";
	}
	
	return 0;
}