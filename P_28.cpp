#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n*k);
        for(auto &i:v) cin >> i;

        ll sum = 0;
        ll pointer = n*k;
        while(k--){
            pointer-=(n/2+1);
            sum+=v[pointer];
        }

        cout << sum << endl;
    
    }
    return 0;
}