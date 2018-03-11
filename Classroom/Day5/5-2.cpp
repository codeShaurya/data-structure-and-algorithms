#include <bits/stdc++.h>
using namespace std;

vector<int> vt;
set<int> output;

int main() {
	int n,k;
	cout<<"Enter the size of the array and value of k : ";
	cin>>n>>k;
	vt.resize(n);
	for(int i=0;i<n;i++)
	{
		cin>>vt[i];
		if(i<k)
			output.insert(vt[i]);
		else
		{
			if(vt[i]>*output.begin())
			{
				output.insert(vt[i]);
				output.erase(output.begin());
			}
		}
	}
	cout<<k<<"th max value is: "<<*output.begin();
	return 0;
}
