#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a , b ;
        cin >> a >> b ;
        if(b == 0) {
            cout << a << endl;
            continue;
        }

        if ( a %2 == 0) {
            a--;
            ll rem = (b-1)%4;
            a-=(b-1) - rem;

            if ( rem == 3) {
                a-=b;
                b--;
                rem--;
            }
            while(rem) {
                a+=b;
                b--;
                rem--;
            }
        } else {
            a++;
            ll rem = (b-1)%4;
            a+=(b-1) - rem;

            if ( rem == 3) {
                a+=b;
                b--;
                rem--;
            }
            while(rem) {
                a-=b;
                b--;
                rem--;
            }
        }

        cout << a << endl;


    }

    return 0;
}