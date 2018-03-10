#include <iostream>
using namespace std;

int main(){
	int n,temp=0;
	cout << "Enter the Cardinality:\n";
	cin >> n;
	int a[n],i,j;
	for(i=0;i<n;i++)
		cin >> a[i];
	int R[n][n] , S[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			R[i][j] = 0;
			S[i][j] = 0;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]== 2*a[i])
				R[i][j] = 1;
			if(a[j] > a[i])
				S[i][j] = 1;
		}
	}
	int RUS[n][n],RIS[n][n],RMS[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			RUS[i][j] = R[i][j] & S[i][j];
			RIS[i][j] = R[i][j] | S[i][j];
			if(R[i][j]==1 && S[i][j]==1)
				RMS[i][j] = 0;
			else
				RMS[i][j] = R[i][j];
		}
	}
	cout << "R Union S\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout << RUS[i][j] << " ";
		cout << "\n";
	}
	cout << "R Intersection S\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout << RIS[i][j] << " ";
		cout << "\n";
	}
	cout << "R Minus S\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout << RMS[i][j] << " ";
		cout << "\n";
	}
	cout<<"Relation R is::\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout<<R[i][j]<<" ";
		cout<<"\n";
	}
	for(int i=1;i<=n;i++){                     
		if(R[i][i]==0){
			temp++;
			break;
		}
	}
	if(temp>0)
		cout<<"Reltion R is not reflexive\n";
	else
		cout<<"Reltion R is reflexive\n";
	temp=0;

	for(int i=0;i<=n;i++){                            
		for(int j=1;j<=n;j++){
			if(R[i][j]==1){
				if(R[j][i]==0){
					temp++;
					break;
				}
			}
		}
	}
	if(temp>0)
		cout<<"Relation R is not symmetric\n";
	else
		cout<<"Relation R is symmetric\n";
	temp=0;
	for(int i=0;i<=n;i++){                          
		for(int j=1;j<=n;j++){
			if(R[i][j]==1){
				for(int k=1;k<=n;k++){
					if(R[j][k]=1){
						if(R[i][k]=0){
							temp++;
							break;
						}
					}
				}
			}
		}
	}
	if(temp>0)
		cout<<"Relation R is not transitive\n";
	else
		cout<<"Relation R is transitive\n";
	temp=0;
	cout<<"Relation S is::\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout<<S[i][j]<<" ";
		cout<<"\n";
	}
	for(int i=1;i<=n;i++){
		if(S[i][i]==0){
			temp++;
			break;
		}
	}
	if(temp>0)
		cout<<"Reltion S is not reflexive\n";
	else
		cout<<"Reltion S is reflexive\n";
	temp=0;
	for(int i=0;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(S[i][j]==1){
				if(S[j][i]==0){
					temp++;
					break;
				}
			}
		}
	}

	if(temp>0)
		cout<<"Relatn S is not symmetric\n";
	else
		cout<<"Relatn S is symmetric\n";
	temp=0;

	for(int i=0;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(S[i][j]==1){
				for(int k=1;k<=n;k++){
					if(S[j][k]=1){
						if(S[i][k]=0){
							temp++;
							break;
						}
					}
				}
			}
		}
	}
	if(temp>0)
		cout<<"Relation S is not transitive\n";
	else
		cout<<"Relation S is transitive\n";

	return 0;
}