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
vector<pair<int, int>> h_movements = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
vector<pair<int, int>> movements = {{0, 0}, {1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<pair<int, int>> d_movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
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
const int N = 1010;
int a[N][N];
bool vis[N][N];
const int M = 1e9 + 7;
ll dfs(int i, int j)
{
    if (vis[i][j])
        return 0;
    ll sum = a[i][j];
    vis[i][j] = 1;
    for (auto e : movements)
    {
        int x = i + e.first;
        int y = j + e.second;
        if (!chk_coor(x, y))
            continue;
        if (a[i][j] == 0)
            continue;
        sum += dfs(x, y);
    }
    return sum;
}
int main()
{
    ll t, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {

                if (a[i][j] != 0 and !vis[i][j])
                {
                    ans = max(dfs(i, j), ans);
                }
            }
        }
        cout << ans << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                a[i][j] = 0;
                vis[i][j] = 0;
            }
        }
    }
    return 0;
}