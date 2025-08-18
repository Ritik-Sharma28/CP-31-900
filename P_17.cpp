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
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int maxi = v[0];
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> i;
            freq[v[i]]++;
            if (freq[v[i]] > freq[maxi])
            {
                maxi = v[i];
            }
        }
        if (freq[maxi] == n)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = n - freq[maxi] + ceil(31 - __builtin_clz(n - freq[maxi]));

        cout << ans << endl;
    }

    return 0;
}