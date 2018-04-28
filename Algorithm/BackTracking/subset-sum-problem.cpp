#include <bits/stdc++.h>
using namespace std;
int n, a[107];
bool s[107] = {false};

bool check(int k, int tar, int sum){
    if(sum + a[k] > tar)
        return false;
    if(s[k])
        return false;
    return true;
}


bool gens(int tar,int sum,int k){
    if(tar == sum)
        return true;

    for(int i = k; i < n; i++){
        if(check(i, tar, sum)){
            s[i] = true;
            return gens(tar, sum+a[i], i+1)
        }
    }

    return false;
}

int main(){
    int tar = 0, t;
    cin>>t;
    while(t--){
        cin>>n;
        tar = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            tar += a[i];
        }

        if(tar % 2 != 0)
            cout<<"NO"<<endl;
        else{
            bool ans = gens(tar/2, 0, 0);
            if(ans ){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}