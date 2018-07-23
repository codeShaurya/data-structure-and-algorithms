#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

void matmult(lli c[][2],lli a[][2],lli b[][2]){
	lli i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=0;
			for(k=0;k<2;k++){
				c[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}
	return;
}

void matmod(lli c[][2]){
	lli i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=c[i][j]%MOD;
		}
	}
	return;
}

void copy(lli a[][2],lli b[][2]){
	lli i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			a[i][j]=b[i][j];
		}
	}
	return;
}

void power(lli ans[][2],lli a[][2],lli b){
	lli temp[2][2];
	while(b){
		if(b&1){
			matmult(temp,ans,a);
			matmod(temp);
			copy(ans,temp);
		}
		b>>=1;
		matmult(temp,a,a);
		matmod(temp);
		copy(a,temp);
	}
	return;
}

int main(){
	lli n,t;
	cin>>t;
	while(t--){
		cin>>n;
        if(n==1)    cout<<4<<"\n";
        else if(n==2)   cout<<15<<"\n";
        else{
            lli ans[][2]={{1,0},{0,1}},a[][2]={{3,3},{1,0}};
            power(ans,a,n-2);
            lli A=(15*ans[0][0]+4*ans[0][1])%MOD;
            cout<<A<<endl;
        }
	}
	return 0;
}