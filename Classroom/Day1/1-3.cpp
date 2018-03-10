#include<bits/stdc++.h>
using namespace std;

const int m=1e5;
int polx[m],poly[m];

int main()
{
	int n,x,y,left=0,right=0;
	cout<<"Enter no. of edges ";
	cin>>n;

	cout<<"Enter "<<n<<" edges"<<endl;
	for(int i=0;i<n;i++)
		cin>>polx[i]>>poly[i];

	cout<<"Enter the point (which you want to check) "<<endl;
	cin>>x>>y;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((poly[i]>=y && poly[j]<=y)||(poly[i]<=y && poly[j]>=y)){
				if(polx[i]>x && polx[j]>x)
					right++;
				else if(polx[i]<x && polx[j]<x)
					left++;
				else{
					float k =(poly[i]-y)/(y-poly[j]);
					float int_x=(k*polx[j]+poly[i])/(k+1);
					if(int_x<x)
						left++;
					else
						right++;
				}
			}
		}
	}

	left/=2;  right/=2;

	if(left%2==0)
		cout<<"Point is Outside";
	else
		cout<<"Point is Inside";
	return 0;
}