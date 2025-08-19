#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &i : v)
            cin >> i;
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                for (int j = i+2; j < n ; j++)
                { 
                    if( v[i+1] > v[j]){
                        cout << "YES" << endl;
                        cout << i+1 << " " << i+2 << " " << j+1 << endl; 
                        flag = true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if(flag) continue;

        cout << "NO" << endl;

    }

    return 0;
}