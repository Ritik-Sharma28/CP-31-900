#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        ll n , k , x;
        cin >> n >> k >> x;

        if ( n*(n+1)/2 < x) {
            cout << "no" << endl;
            continue;
        }

        ll max_sum = 0;
        ll min_sum = k*(k+1)/2;
        

        while ( k--) {
            max_sum+=(n);
            
            n--;
        }

        if ( max_sum >= x && x >= min_sum) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }


      
    }

    return 0;
}