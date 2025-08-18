#include<bits/stdc++.h>
using ll = long long;

using namespace std;




int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> v(n);

        for( auto &i:v) cin >> i;

        if ( n % 2 == 0) {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
            continue;
        }

        vector<vector<int>> ans;

        int XOR = 0;
        int start = 1;

        for ( int i = 0 ; i < n ; i++) {
            if ( v[i] != 0) {
                XOR^=v[i];
            } else {
                ans.push_back({start , i});
                if ( XOR != 0) {
                    ans.push_back({ start , i });
                } 
                start = i + 1; ;
            }
        }

        if ( ans.size() == 0) {
            cout << 0 << endl;
            continue;
        } 

        cout << ans.size() << endl;

        for ( auto &i:ans) {
            for ( auto &j:i) {
                cout << j << " " ;
            }
            cout << endl;
        }



    }




    return 0;
}