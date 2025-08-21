#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n ;
        if( n == 1) {
            cout << 0 << endl;
            continue;
        }
        ll cnt = 0;
        while( n != 1){
            if( n % 6 == 0){
                n/=6;
            } else if( n% 3 == 0){
                n*=2;
            } else{
                break;
            }
            cnt++;
        }

        if( n == 1) cout << cnt << endl;
        else cout << -1 << endl;

        
    
    }
    return 0;
}