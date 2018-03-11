#include<iostream>
using namespace std;

struct complex{
	int r,i;
};

int main(){
	int w;
	cout<<"Enter the size";
	cin>>w;
	complex a[w][w],b[w][w],c[w][w];
	cout<<"enter the element of first complex matrix in pair( a,b)"<<endl;
	for(int j=0;j<w;j++){
		for(int k=0;k<w;k++){
			cin>>a[j][k].r>>a[j][k].i;
		}
	}
	cout<<"enter the element of second complex matrix in pair( a,b)"<<endl;
	for(int l=0;l<w;l++){
		for(int m=0;m<w;m++){
			cin>>b[l][m].r>>b[l][m].i;
		}
	}

	for(int n=0;n<w;n++){
		for(int t=0;t<w;t++){
			c[n][t].r=(((a[n][t].r)*(b[n][t].r))-((a[n][t].i)*(b[n][t].i)));
			c[n][t].i=(((a[n][t].r)*(b[n][t].i))+((a[n][t].i)*(b[n][t].r)));
		}
	}

	for(int s=0;s<w;s++){
		for(int p=0;p<w;p++)
			cout<<c[s][p].r<<"+i"<<c[s][p].i<<"   ";
		cout<<endl;
	}

	return 0;
}


/*

2 3  3 4  2 5
2 3  3 4  2 5
2 6  1 5  3 7

3 1  6 8  6 3
2 4  5 6  8 3
1 3  5 6  2 3
*/