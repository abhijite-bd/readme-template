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
    ll n, p, i, j, k, l, ans;
    ans = 0;
    cin >> n >> p;
    string s[n];
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    i = n - 1;
    ll apple = 0;
    while (i >= 0)
    {
        if (s[i] == "half")
        {
            ans += (apple * p);
            apple *= 2;
        }
        else
        {
            ans += (apple * p + p / 2);
            apple = apple * 2 + 1;
        }
        i--;
    }
    cout << ans << endl;
    return 0;
}