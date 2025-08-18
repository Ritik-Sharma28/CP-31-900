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

        for ( auto&i:v) cin >> i;
    
        for ( int i = n-2 ; i >=0  ; i--) {
            int cnt = 0;
            while( v[i+1] <= v[i] && v[i] != 0) {
                v[i]/=2;
            }

            if ( v[i+1] > v[i]) {
                ans+=cnt;
            } else {
                ans = -1;
                break;
            }
        }

        cout << ans << endl;

    }

    return 0;
}