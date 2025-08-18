#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {

        ll n , k;
        cin >> n >> k; 
       
        vector<ll> v(n);
         for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin() ,v.end());

        int max_len = 1;
        int cnt = 1;
        for ( int i = 1 ; i < n  ; i++) {
            if ( v[i] - v[i-1] <= k) {
                    cnt++;
            } else {
                 cnt = 1;
            }
            max_len = max(max_len , cnt);
        }


        cout << n - max_len << endl;


    }

    return 0;
}