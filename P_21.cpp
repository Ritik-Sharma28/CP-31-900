#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<string> operation = {"00", "25", "75", "50"};
        int ans = INT_MAX;

        for (int i = 0; i < 4; i++)
        {
            int cnt = 0;

            int idx = 1;

            char last = operation[i][idx];

            for (int j = s.length() - 1; j >= 0; j--)
            {

                if (s[i] == last)
                {
                    idx--;

                    if (idx < 0)
                    {
                        ans = cnt;
                        break;
                    }
                }
                else
                {
                    cnt++;
                }
            }

            if (idx < 0)
            {
                ans = min(ans, cnt);
            }
        }

        cout << ans << endl;
    }

    return 0;
}