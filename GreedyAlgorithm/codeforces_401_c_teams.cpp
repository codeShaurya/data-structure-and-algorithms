/*
Problem:
Now it's time of Olympiads. Vanya and Egor decided to make his own team to take part in a programming Olympiad. They've been best friends ever since primary school and hopefully, that can somehow help them in teamwork.

For each team Olympiad, Vanya takes his play cards with numbers. He takes only the cards containing numbers 1 and 0. The boys are very superstitious. They think that they can do well at the Olympiad if they begin with laying all the cards in a row so that:

    there wouldn't be a pair of any side-adjacent cards with zeroes in a row;
    there wouldn't be a group of three consecutive cards containing numbers one.

Today Vanya brought n cards with zeroes and m cards with numbers one. The number of cards was so much that the friends do not know how to put all those cards in the described way. Help them find the required arrangement of the cards or else tell the guys that it is impossible to arrange cards in such a way.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    if(m < n-1) cout << -1 << endl;
    else if(m == n-1)
    {
        cout << 0;
        for(int i = 0 ; i < m ; i++)
            cout << 10;
        cout << endl;
    }
    else//m>n-1
    {
        int t = m-n,left = 0;//after filling all right ones with one one
        if(t > n+2)
        {
            cout << -1 << endl;
            return 0;
        }

        if(t <= 2)
        {
            left = t;
            t = 0;
        }
        else
        {
            left = 2;
            t -= 2;//now t slots have 2 ones
        }
        int i = 0;
        for(i = 0 ; i < left ; i++) cout << 1;
        for(i = 0 ; i < t ; i++)    cout << "011";//since 011 will come as 11
        while(i < n)
        {
            cout << "01";
            i++;
        }
        cout << endl;
    }
}
