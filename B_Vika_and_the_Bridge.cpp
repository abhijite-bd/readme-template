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
#define ff first
#define sc second
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl '\n'
#define PI 3.141592653589793
#define inf 1e9 + 10
#define case() cout << "Case " << cs++ << ": "
#define memset(x, y) memset(x, y, sizeof(x))
vector<pair<int, int>> h_movements = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
vector<pair<int, int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<pair<int, int>> d_movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
ll n, m, i, j;
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
    ll t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll a[n], b[k + 1];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int prev[k + 1];
        memset(prev, 0);
        vector<pair<int, int>> diff(k + 1, {0, 0});

        for (i = 0; i < n; i++)
        {
            ll v = i - prev[a[i]];
            if (diff[a[i]].first < v)
            {
                diff[a[i]].second = diff[a[i]].first;
                diff[a[i]].first = v;
            }
            else if (diff[a[i]].second < v)
                diff[a[i]].second = v;

            prev[a[i]] = i + 1;
        }
        for (i = 1; i <= k; i++)
        {
            ll v = n - prev[a[i]];
            if (diff[k].first < v)
            {
                diff[k].second = diff[k].first;
                diff[k].first = v;
            }
            else if (diff[k].second < v)
                diff[k].second = v;
        }
        int res = inf;
        for (i = 0; i <n; i++)
        {
            res = min(res, max(diff[a[i]].first / 2, diff[a[i]].second));
        }
        cout << res << endl;
    }
    return 0;
}