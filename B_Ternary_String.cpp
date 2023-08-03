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
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        string s;
        int one, two, thr;
        map<int, int> m;
        cin >> s;
        int ans = inf;
        one = two = thr = inf;
        for (i = 0; i < s.size(); i++)
        {
            m[s[i] - '0']++;
            if ((s[i] - '0') == 1)
            {
                one = i;
            }
            if ((s[i] - '0') == 2)
            {
                two = i;
            }
            if ((s[i] - '0') == 3)
            {
                thr = i;
            }
            if (m[1] > 0 and m[2] > 0 and m[3] > 0)
            {
                ans = min(ans, max3(one, two, thr) - min3(one, two, thr));
            }
        }
        if (ans == inf)
            cout << 0 << endl;
        else
            cout << ans + 1 << endl;
    }
    return 0;
}