#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {


        int n;
        cin >> n;

        vector < int > v(n);

        for (auto & i: v) cin >> i;
        int ans = INT_MIN;
        for ( int i = 0 ; i < n  ; i++) {
          
            ans = max ( ans , v[ (i+1) % n] - v [i]);
        }

        cout << ans << endl;
    }

    return 0;
}