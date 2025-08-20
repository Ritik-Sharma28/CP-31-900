#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   string s;
        cin >> s;
        int n = s.length();
        bool alice = false;
        unordered_map<int,bool> mp;
        for (int i = 0; i < n - 2; i++)
        {
             if ( !mp[i] && !mp[i+1] && s[i] != s[i+1]){
                alice = !alice;
                mp[i] = 1;
                mp[i+1] =1;
                i = 0;
             }
        }


        if(alice) cout << "DA" << endl;
        else cout << "NET" << endl;

    }

    return 0;
}