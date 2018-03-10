#include<bits/stdc++.h>
using namespace std;

int main(){
	vector <int> st_in,st_out,v3;
	int x;
	int k=0;
	while(1){
		cout<<"Enter your choic ";
		cout<<"1. Enque  ";
		cout<<"2. Deque  ";
		cout<<"3. Display"<<endl;
		cin>>x;
		switch(x){
			case 1: {
				int n;
				cout<<"enter the number  ";
				cin>>n;
				st_in.push_back(n);
				k++;
				st_out=st_in;
				reverse(st_out.begin(),st_out.end());
			}
			break;	

			case 2: {
				reverse(st_in.begin(),st_in.end());
				st_in.pop_back();
				reverse(st_in.begin(),st_in.end());
				k--;
				st_out.pop_back();

			}
			break;

			case 3: {
				cout<<"Element in array are  :"<<endl;
				for(int i=0;i<k;i++)
					cout<<st_in[i]<<endl;
			}	
		}
	}
	return 0;
}