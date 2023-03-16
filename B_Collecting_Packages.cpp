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
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        string ans = "";
        cin >> n;
        vector<pair<int, int>> v;
        for (i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        int prex, prey;
        prex = prey = 0;
        int flag = 1;
        for (auto e : v)
        {
            string temp1 = string(e.first - prex, 'R');
            if (e.second < prey)
            {
                flag = 0;
                break;
            }
            string temp2 = string(e.second - prey, 'U');
            prex = e.first;
            prey = e.second;
            ans += temp1;
            ans += temp2;
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << ans << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}