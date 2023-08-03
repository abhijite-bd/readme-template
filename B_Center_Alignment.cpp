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
const int N = 2000;
char a[N][N];
const int M = 1e9 + 7;
int main()
{
    string s;
    vector<string> v;
    while (getline(cin, s))
    {
        v.pb(s);
    }
    int i, j, k, l, n, m;
    n = 2;
    m = v.size() + 2;
    for (auto e : v)
        n = max(n, (int)e.size() + 2);
    // cout << n << ss << m << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 or i == m - 1)
                a[i][j] = '*';
            else if (j == 0 or j == n - 1)
                a[i][j] = '*';
            else
                a[i][j] = ' ';
        }
    }
    k = 1;
    int x = 1;
    for (auto e : v)
    {
        s = e;
        l = e.size();
        j = n - l;
        if (j % 2)
        {
            if (x)
                j /= 2;
            else
                j = j / 2 + 1;
            x ^= 1;
        }
        else
            j /= 2;
        for (i = 0; i < l; i++, j++)
        {
            a[k][j] = s[i];
        }
        k++;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}