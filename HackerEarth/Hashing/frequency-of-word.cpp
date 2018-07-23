#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> umap;
    string s;
    getline(cin,s);

    stringstream ss(s);  // Used for breaking words
    string w; // To store individual words
    while (ss >> w)
        umap[w]++;

    unordered_map<string, int> :: iterator itr;
    for (itr=umap.begin() ; itr!=umap.end(); ++itr)
        cout<<itr->first<<" "<<itr->second<<endl;

    return 0;
}