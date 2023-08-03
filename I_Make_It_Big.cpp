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
    string s;
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> s;
        n = s.size();
        string p = s;
        // if (n == 2)
        // {
        //     cout << s << endl;
        //     continue;
        // }
        int c = 0;
        for (i = 0; i < n; i++)
        {
            if (c == 2)
                break;
            char mxc = s[i];
            int mxp = i;
            for (j = i + 1; j < n; j++)
            {
                if (s[j] >= mxc)
                {
                    mxc = s[j];
                    mxp = j;
                }
            }
            if (mxp > i)
            {
                swap(s[i], s[mxp]);
                c++;
            }
        }

        if (c == 1)
            swap(s[n - 1], s[n - 2]);
        if (s < p)
            cout << p << endl;
        else
            cout << s << endl;
    }
    return 0;
}