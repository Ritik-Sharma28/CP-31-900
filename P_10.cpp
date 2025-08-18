#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {


        int n, q;
        cin >> n >> q;

        vector < int > v(n);

        for (auto & i: v) cin >> i;

       vector<int> prefix_odd (n + 1 , 0);
       
       for ( int i = 0 ; i < n  ; i++) {
           
           prefix_odd[i+1] = prefix_odd[i] + (v[i] % 2);
       }
       
       while(q--) {
           int l , r , val ;
           cin >> l >> r >> val;
\
           int total = prefix_odd[n];
           
           int between = prefix_odd[r] - prefix_odd[l - 1];
           
           int left = total - between;
           
           if ( val % 2 != 0) {
               left+= r - l + 1;
           } 
           
           if ( left%2 != 0) {
               cout << "yes" << endl;
           } else {
               cout << "no" << endl;
           }
       }

    }

    return 0;
}