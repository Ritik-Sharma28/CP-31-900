#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n , x;
        cin >> n >> x;
         ll maxi = 0;
         ll sum = 0;
         vector<ll> v(n);
         for(auto & i:v){
            cin >> i;
            maxi+=((ll)(i + x - 1) / x);
            sum+=i;
         }    
        ll mini =(ll)(sum + x - 1) / x ;

        cout << mini << " " << maxi << endl;

    }

    return 0;
}