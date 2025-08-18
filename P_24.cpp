#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        if ( b > a) swap(a,b);

        ll dif = a - b;

        cout << dif << " " << min(b % dif , dif - b%dif ) << endl;


    }
    return 0;
}