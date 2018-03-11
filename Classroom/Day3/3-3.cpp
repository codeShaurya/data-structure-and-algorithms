#include<bits/stdc++.h>
using namespace std;

bool mat[100][100]={0};
int m,n ;

bool possible(int i,int j){
	if(i-1>=0 && mat[i-1][j]==true)   //Top
		return false;

	if(i+1>=0 && mat[i+1][j]==true)   //Down
		return false;

	if(j-1>=0 && mat[i][j-1]==true)   //Left
		return false;

	if(j+1>=0 && mat[i][j+1]==true)   //Right
		return false;

	return true;
}

int ways(int i,int j,int coins)
{
	if(coins==0){
		for(int i=0 ; i<m ; i++){
			for(int j=0 ; j<n ; j++){
				if(mat[i][j])
					cout<<"X ";
				else
					cout<<". ";
			}
			cout<<endl;
		}
		cout<<endl;
		return 1;
	}
	if(i==m)
		return 0;
	if(j==n)
		return ways(i+1,0,coins);
	
	int ans=0;
	//If it is possible to place the queen at that place then place it
	if(possible(i,j)){
		mat[i][j]=1;
		ans+=ways(i,j+1,coins-1);
		mat[i][j]=0;
	}
	
	ans+=ways(i,j+1,coins);
	return ans;
}

int main()
{
	int coins;
	cout<<"Enter matrix size and number of coins :";
	cin>>n>>coins;
	m=n;
	cout<<"Total Ways  "<<ways(0,0,coins);
	return 0;
}
