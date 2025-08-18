#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , x;
        cin >> n >> x;
         int maxi = 0;
         int sum = 0;
         vector<int> v(n);
         for(auto & i:v){
            cin >> i;
           // cout << (int)ceil(i/x) << " " ;
            maxi+=((int)ceil(i/(double)x));
            sum+=i;
         }    
        int mini =(int)ceil(sum/x) ;

        cout << mini << " " << maxi << endl;

    }

    return 0;
}