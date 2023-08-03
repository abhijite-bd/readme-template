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
vector<pair<int, int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
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

bool cmp(vector<ll> &a, vector<ll> &b)
{
    return double(a[1]) / a[0] > double(b[1]) / b[0];
}
ll cs = 1;
const int N = 1e5 + 10;
const int M = 1e9 + 7;
int main()
{
    ll t, w, i, j, ans;
    cin >> n >> w;
    vector<ll> dp(N, inf), ndp(N, inf);
    dp[0] = ndp[0] = 0;
    for (i = 0; i < n; i++)
    {
        ll wt, va;
        cin >> wt >> va;
        for (j = 0; j < N; j++)
        {
            dp[j] = ndp[j];
            if (j >= va)
            {
                ndp[j] = min(ndp[j], dp[j - va] + wt);
            }
        }
        dp = ndp;
    }
    ans = 0;
    for (i = 0; i < N; i++)
    {
        if (dp[i] <= w)
            ans = i;
    }
    cout << ans << endl;
    return 0;
}