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
const int N = 30;
int dp[N][N];
const int M = 1e9 + 7;
void check(string s)
{
    set<char> us;
    for (i = 0; i < s.size(); i++)
    {
        us.insert(s[i]);
    }
    int a, b;
    auto it = us.begin();
    if (us.size() == 1)
    {
        a = b = *it - 'a' + 1;
        dp[a][b] += s.size();
    }
    else if (us.size() == 2)
    {
        a = *it - 'a' + 1;
        it++;
        b = *it - 'a' + 1;
        dp[a][b] += s.size();
    }
    // cout << a << ss << b << endl;
}
int main()
{
    int n, i, j, k, l;
    cin >> n;
    string x;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        check(x);
    }
    int mx = 0;
    for (i = 1; i <= 26; i++)
    {
        for (j = 1; j <= 26; j++)
        {
            int d = dp[i][i];
            if (i != j)
                d = d + dp[j][j] + dp[i][j];
            mx = max(mx, d);
        }
        cout << endl;
    }
    cout << mx << endl;
    return 0;
}