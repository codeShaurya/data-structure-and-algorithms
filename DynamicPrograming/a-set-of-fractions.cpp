#include <bits/stdc++.h>
using namespace std;

const int m = 1e6;

int mem[m];
int divs[m];
bool diva[m];

int _cal_div (int n){
	if(n <4 )
		return divs[n] = 1;
	if(diva[n])
		return divs[n];
	diva[n] = true;
	
	int i = n/2+1;

	while( n % i != 0 && i > 0 )
		i--;

	return divs[n] = 1 + _cal_div(i);
}


int _cal_ans(int n){
	if(n == 0)
		return mem[0] = 0;
	else if(n == 2)
		return mem[2] = 3;
	else if(mem[n] != -1)
		return mem[n];
	else{
		return mem[n] = _cal_ans(n-1) + n-1 - divs[n];
	}
}


int main() {
	int t, n;
	cin>>t;

	memset(mem, -1, sizeof(mem));
	memset(divs, 1, sizeof(divs));

	mem[1] = 2;
	mem[0] = 0;

	memset(diva, false, sizeof(diva));

	divs[0] = 0;
	divs[1] = 1;
	divs[2] = 1;
	divs[3] = 1;

	for (int i = 2; i < 100000; ++i){
		int ans1 = _cal_div(i);
	}

	int ans = _cal_ans(100000);

	while(t--){
		cin>>n;
		cout<<mem[n]<<endl;
	}

	return 0;
}
