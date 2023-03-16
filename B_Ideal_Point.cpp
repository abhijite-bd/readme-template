#include <bits/stdc++.h>
using namespace std;
#define ss ' '
#define ll long long int
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define fast()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)
#define max3(a, b, c) max(max(a, b), c)
#define min3(a, b, c) min(min(a, b), c)
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define endl '\n'
#define pi 3.141592653589793
#define case cout << "Case " << cs++ << ": "
ll n, m;
bool chk_coor(ll i, ll j)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
    {
        return false;
    }
    return true;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    int t, n, i, j, k, l, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<pair<int, int>> v;
        for (i = 0; i < n; i++)
        {
            int p, q;
            cin >> p >> q;
            if (p <= x and q >= x)
            {
                v.pb({p, q});
            }
        }
        int l = 0, r = 100;
        for (i = 0; i < v.size(); i++)
        {
            // cout << v[i].first << ss << v[i].second << endl;
            l = max(l, v[i].first);
            r = min(r, v[i].second);
        }
        // cout << l << ss << r << endl;
        if (l == r and l == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}