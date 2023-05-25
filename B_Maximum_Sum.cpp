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
    ll t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ll a[n + 1], b[n + 2];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a + 1, a + n + 1);

        a[0] = 0;
        b[0] = 0;
        b[n + 1] = 0;
        for (i = 2; i <= n; i++)
        {
            a[i] += a[i - 1];
        }
        for (i = n - 1; i > 0; i--)
        {
            b[i] += b[i + 1];
        }
        ll total = accumulate(a, a + n, 0LL);
        ll temp1 = 0, temp2, temp = inf;

        i = 2;
        j = n;
        while (k--)
        {

            temp1 = a[i];
            temp2 = b[j];
            cout << temp1 << ss << temp2 << endl;
            temp = min(temp1, temp2);
            i += 2;
            j--;
        }
        cout << total - temp << endl;
    }
    return 0;
}