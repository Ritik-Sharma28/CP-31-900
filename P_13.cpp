#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {


        int n;
        cin >> n;

        vector < int > v(n);
        int ans = 0;
        bool flag = 0;
        for ( int i = 0 ; i < n  ; i++) {
            cin >> v[i];
          if ( v[i] != 0) flag = 1;
          else {
            if ( flag) ans++;
            flag = 0;
          }
        }
        if ( flag) ans++;
        
 
        
        if ( ans <=1) {
            cout << ans << endl;
        } else {
            cout << 2 << endl;
        }

    }

    return 0;
}