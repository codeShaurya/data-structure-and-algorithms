#include <bits/stdc++.h>
using namespace std;
vector<int> vt,output;

int main() {
	int n,k;
	cout<<"Enter the size of the array and value of k : ";
	cin>>n>>k;
	vt.resize(n);
	for(int i=0;i<n;i++)
	{
		cin>>vt[i];
		if(i<k)
			output.push_back(vt[i]);
		else if(i==k)
			sort(output.begin(),output.end());
		else
		{
			if(vt[i]>output[0] && vt[i]<output[k-1])
			{
				output[k-1]=vt[i];
				sort(output.begin(),output.end());
			}
		}
	}
	cout<<k<<"th smallest value is : "<<output[k-1];
	return 0;
}
