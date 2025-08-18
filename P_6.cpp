#include<bits/stdc++.h>
#define ll long long

using namespace std;


vector<ll> getFactors(ll n) {
    vector<ll> factors;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);               
            if (i != n / i)                     
                factors.push_back(n / i);       
        }
    }

    sort(factors.begin(), factors.end());      
    return factors;
}



int main() {
    ll t;
    cin >> t;

    while (t--) {

        ll n ;
        cin >> n ; 
       
        vector<ll> fac = getFactors(n);

        ll max_interval = 1;

        for ( ll i = 0 ; i < fac.size() - 1 ; ++i) {
           ll cnt = 1;
           
           while ( fac[i] + 1 == fac[i+1]) {
            cnt++;
           }
           max_interval = max(max_interval , cnt);

        }

        cout << max_interval << endl;
       
        
        
        
        


    }




    return 0;
}