/* **The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence
     such that all elements of the subsequence are sorted in increasing order.
     For example, the length of LIS for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 and
     LIS is {10, 22, 33, 50, 60, 80}
     ** ***/
/* **** Complexity = O(n^2) *** */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> Arr;
    int n,temp;
    cout<<"\nEnter number of the elements in the sequence : ";
    cin>>n;
    cout<<"\nEnter elements of the sequence : \n";
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        Arr.push_back(temp);
    }
    vector<int> LIS_List(n,1);
    int maxSequence=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if((Arr[i]>Arr[j]) && (LIS_List[i]<LIS_List[j]+1))
               {
                   LIS_List[i]=LIS_List[j]+1;
               }
        }
    }
    for(int i=0;i<n;i++)
    {
        (maxSequence < LIS_List[i])?maxSequence=LIS_List[i]:maxSequence;
    }
    cout<<"\nLength of the Longest Increasing Subsequence is "<<maxSequence<<"\n";
    return 0;
}
