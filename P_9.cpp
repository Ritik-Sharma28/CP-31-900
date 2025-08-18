#include<bits/stdc++.h>
using namespace std;

int main () {
 
   
    int n;
    cin>>n;

    vector<int> v(n);

    for ( auto &i:v) cin >> i;
    
    int ans = 0;

    for ( int i = 0 ; i < n ; i++) {
        if ( abs(v[i] - (i+1)) != 0) {
            ans = min ( ans , abs(v[i] - (i+1)) );
        }
    }


    cout << ans << endl;
    
 
    return 0;
}
