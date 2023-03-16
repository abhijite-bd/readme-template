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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (max(c, d) > min(a, b))
    {
        ll l = max(c, d) - min(a, b);
        a += l;
        b += l;
    }
    if (min(a, b) > max(c, d))
    {
        ll l = min(a, b) - max(c, d);
        c += l;
        d += l;
    }
    ll y = max(a, b);
    ll x = a + b - c - d;
    cout << min(x, y) / gcd(x, y) << "/" << max(x, y) / gcd(x, y) << endl;
    
    return 0;
}