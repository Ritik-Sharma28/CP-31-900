#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a , b , c;
        cin >> a >> b >> c;

       bool flag = 0;

       if ( 2*b <= (a+c)) 
       {
         ll x = 2*b;
         ll y = (a+c);
         if ( y % x == 0) {
            flag = 1;
         }
       }
       else
       {

        ll d1 = b - a;
        ll d2 = c - b;

        ll r = d1 + b;

        if ( r % c == 0) flag = 1;

        ll l = d2 - b;

        if ( l % a == 0) flag = 1;

       }

       if (flag) cout << "yes" << endl;
       else cout << "no" << endl;

    }

    return 0;
}