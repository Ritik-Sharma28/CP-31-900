#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , k;
        cin >> n >> k;

        vector <int> v(n);
        
        int one = 0;
        int zero = 0;

        for ( int i = 0 ; i < n ; i++) {
            cin >> v[i];

            if ( v[i] == 1) one++;
            else if ( v[i] == 0) zero++;
        }

        ll ans = one*(pow(2,zero));

        cout << ans << endl;
       
        
    }
    return 0;
}