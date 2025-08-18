#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;

        unordered_map<char,int> freq;
        
        for ( auto & i: t) freq[i]++;
        
        string temp ="";
        
        for ( int i = s.length() - 1 ; i >= 0 ; i--) {
            if ( freq[s[i]] > 0) {
                freq[s[i]]--;
                temp= s[i] + temp;
            }
        }
        
        if ( temp == t) cout << "yes" << endl;
        else cout << "no" << endl;
        
    }

    return 0;
}