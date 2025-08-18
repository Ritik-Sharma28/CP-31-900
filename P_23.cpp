#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ;
        cin >> n ;

        vector <int> v(n);
        
         for(auto &i:v) cin >> i;

         for ( int i =  0 ;  i < n ; i++) {
            for ( int j =  i+1 ; j < n ; j++){
                v[i] = min ( v[i] , v[i] & v[j]);
            }
         }

          for ( int i =  n-1 ;  i >=0 ; i--) {
            for ( int j =  n-1-i ; j >=0 ; j--){
                v[i] = min ( v[i] , v[i] & v[j]);
            }
         }

         int maxi = *max_element(v.begin() , v.end());

         cout << maxi << endl;

        
    }
    return 0;
}