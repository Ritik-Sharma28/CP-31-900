#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        ll a , b , n;
        cin >> a >> b >> n;

        vector<ll> v(n);

        for(auto &i:v) cin >> i;
        
        ll ans = b ;

        for ( int i = 0 ; i < n ; i++) {
            if ( v[i] <= a - 1) {
                ans+=v[i];
            } else {
                ans+=a - 1;
            }
        }

        cout << ans << endl;


        
    }




    return 0;
}