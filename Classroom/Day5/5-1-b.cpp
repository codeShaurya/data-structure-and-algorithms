#include <iostream>
using namespace std;
int count=0;

void PrintOptions(int r,int b,int clr,string str){
	if(r<0 || b<0)
		return;
	if(r==0 && b==0){
		cout<<str<<endl;
		count++;
		return;
	}
	else{
		if(clr==0){   
			if(r>0)
				PrintOptions(r-1,b,1,str+'r');
			if(b>0)
				PrintOptions(r,b-1,0,str+'b');
		}
		else if(clr==1){
			if(r>0)
				PrintOptions(r-1,b,2,str+'r');
			if(b>0)
				PrintOptions(r,b-1,0,str+'b');
		}
		else if(clr==2){
			if(b>0)
				PrintOptions(r,b-1,0,str+'b');
		}
	}
}

int main() {
	int r,b;
	cout<<"Enter the number of red and black marbel : ";
	cin>>r>>b;
	PrintOptions(r,b,0,"");
	cout<<"Total number of possibilities is "<<count;
	return 0;
}

