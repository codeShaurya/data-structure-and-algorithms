#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["a"] = 4;
    umap["b"] = 3;
    umap["c"] = 10;
    umap["d"] = 2;
    umap["e"] = 6;

    // inserting value by insert function
    umap.insert({"f", 7});

    string key = "d";

    // If key not found in map iterator to end is returned
    // and if key found then iterator to that key is returned
    if (umap.find(key) == umap.end())
        cout << key << " not found\n\n";
    else
        cout << "Found " << key << "\n\n";

    //    iterating over all value of map
    unordered_map<string, int>:: iterator itr;
    cout << "\nAll Elements : \n";
    for (itr = umap.begin(); itr != umap.end(); itr++)
        cout << itr->first << "  " << itr->second << endl;

    return 0;
}