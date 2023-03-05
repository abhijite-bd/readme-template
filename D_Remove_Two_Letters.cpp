#include <bits/stdc++.h>
using namespace std;
unordered_set<string> stt;
int main()
{
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        int ans = n-1;
        for (i = 1; i < n -1; i++)
        {
            if (s[i - 1] == s[i + 1])
                ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}