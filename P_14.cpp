#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        ll n;
        cin >> n;

        if ( n%2 != 0 || n < 4) {
            cout << -1 << endl;
            continue;
        }

        if ( n == 4 || n == 6 ) {
            cout << 1 << " " << 1 << endl;
            continue;
        } 

        ll x = INT_MAX;
        ll y = INT_MIN;

        if ( (n-6) % 4 == 0) {
          //  x = min ( x , (n-6)/ 4  + 1 );
            y = max ( y , (n-6)/ 4  + 1 );
        } else if ( n % 4 == 0 ) {
            y = n / 4;
        } else if ( n % 6 == 0) {
            y = n / 6;
        } 

        if ( (n-4) % 6 == 0) {
            x = min ( x , (n-4)/ 6  + 1 );
           // y = max ( y , (n-4)/ 6  + 1 );
        } else if ( n % 6 == 0) {
            x = n / 6;
        } else if ( n % 4 == 0) {
            x = n / 4;
        }


        if ( x == INT_MAX || y == INT_MIN) {
            cout << -1 << endl;
            continue;
        }












    }




    return 0;
}