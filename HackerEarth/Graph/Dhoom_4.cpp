// Created by Jaimin Chaudhari
// Date : 6-10-2018

/*

Samarpit is the main hero of the Dhoom 4.He is trying to steal from the Code Bank Of Hackers.Samarpit has a key with an integer value printed on it. He also has N other keys with each key having its own specific value.Samarpit is trying to break the Lock for which he is supposed to get to the lock's key value. He can perform one type of operation.Take his own key and one of the other N keys and merge them.During merging Samarpit's Key value changes to product of both the keys modulus 100000.

For example if his key value was X and he took a key with value Y the his new key will be (X*Y)%100000.The other key that was used during the merging process remains along with other N-1 keys.

This entire process of merging takes 1 second.Now since he is in a hurry he asks to you to find the minimum time in which he could reach to the lock's key value.

Input:
The first line contains 2 integers they are Samarpit's Key value and the Lock's key value.
The second line contains N indicating the number of other keys Samarpit has.
Third line contains N space separated integers indicating the value of N other keys.

Output:
The minimum time required to get to the Lock's Key.If he is unable to reach that print -1.

Constraints:
1 ≤ N ≤ 1000
1 ≤ Value of all the keys ≤ 100000 




SAMPLE INPUT

3 30
3
2 5 7


SAMPLE OUTPUT

2

*/

/********************************************************************************/


#include<bits/stdc++.h>

#define ll long long
#define FOR(i,s,n) for(ll i = s; i < (n); i++)
#define FORD(i,s,n) for(ll i=(n)-1;i>=s;i--)

using namespace std;

int main()
{
    ll sk,lk;
    cin>>sk>>lk;
    ll n;
    cin>>n;
    ll arr[n];
    FOR(i,0,n)
        cin>>arr[i];
    if(sk == lk)
    {
        cout<<0;
        return 0;
    }
    ll height[100001] = {0};

    list<ll>queue;
    queue.push_back(sk);
    ll current;

    while(!queue.empty())
    {
        current = queue.front();
        queue.pop_front();
        FOR(i,0,n)
        {
            ll tmp = (current*arr[i])%100000;
            if(height[tmp] == 0)
            {
                height[tmp] = height[current] +1;
                if(tmp == lk)
                {
                    cout<<height[tmp];
                    return 0;
                }
                queue.push_back(tmp);
            }
        }
    }
    cout<<-1;
    return 0;
}