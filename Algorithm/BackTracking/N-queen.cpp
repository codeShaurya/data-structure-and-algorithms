#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m = 1e3;
int n;
bool p[m+1][m+1];

bool _isPlace(int r,int c){
	for (int i = 1; i < c; ++i){
		if(p[r][i])
			return false;
	}

	int i,j;
	for (i = r, j = c; i > 0 && j > 0; i--, j--){
		if(p[i][j])
			return false;
	}

	for (i = r, j = c; i <= n && j > 0; i++, j--){
		if(p[i][j])
			return false;
	}

	return true;
}

bool _N_Queens(int c){
	if(c > n )
		return true;

	for (int i = 1; i <= n; ++i){
		if(_isPlace(i, c)){
			p[i][c] = true;
			if(_N_Queens(c+1))
				return true;
			p[i][c] = false; // Back tracking
		}	
	}

	return false;
}

int main(){
	cin>>n;
	memset(p,false,sizeof(p));

	if(n==1){
		cout<<"YES\n1"<<endl;
	}
	else if(n<4){
		cout<<"NO"<<endl;
	}
	else{
		bool ans = _N_Queens(1);
		if(ans){
			cout<<"YES"<<endl;
			for (int i = 1; i <= n; ++i){
				for (int j = 1; j <= n; ++j){
					cout<<p[i][j]<<" ";
				}
				cout<<endl;
			}
		} 
		else 
			cout<<"NO"<<endl;
	}

	return 0;	
}