#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        int i, j, k, l;
        cin >> n >> m;
        string s;
        cin >> s;
        set<pair<int, int>> st;
        vector<int> nxt(n + 1, n), prev(n + 1, -1);
        for (i = n - 1; i >= 0; i--)
        {
            nxt[i] = (s[i] == '1' ? i : nxt[i + 1]);
        }
        for (i = 0; i < n; i++)
        {
            prev[i + 1] = (s[i] == '0' ? i : prev[i]);
        }
        while (m--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            l = nxt[l];
            r = prev[r];
            if (l > r)
                l = r = -1;
            st.emplace(l, r);
        }
        cout << st.size() << endl;
    }
    return 0;
}