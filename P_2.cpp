#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> v(26, 0);

        for (int i = 0; i < n; i++)
        {
            int val = s[i] - 'a';
            v[val]++;
        }

        int cnt = 0;

        for (int i = 0; i < 26; i++)
        {
            if (v[i] % 2 != 0)
            {
                cnt++;
            }
        }
        if (n % 2 == 0)
        {
            if (cnt - k == 0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
        else
        {
            if ((cnt - k) == 0 || (cnt - k) == 1)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }

    return 0;
}