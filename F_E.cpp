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
    ll i, j, k, l, n, a, b;
    cin >> n >> k >> a >> b;
    ll mn = min(a, b);
    ll mx = (mn + 1) * k;
    if (mx < max(a, b))
        cout << "NO" << endl;
    else
    {
        if (a > b)
        {
            while (a > 0 or b > 0)
            {
                ll d = k;
                while (a != 0 and d != 0)
                {
                    cout << 'G';
                    a--;
                    d--;
                }
                d = k;
                while (b != 0 and d != 0)
                {
                    if (b * k < a)
                        break;
                    cout << 'B';
                    b--;
                    d--;
                }
            }
        }
        else
        {
            while (a > 0 or b > 0)
            {
                ll d = k;
                while (b != 0 and d != 0)
                {
                    cout << 'B';
                    d--;
                    b--;
                }
                d = k;
                while (a != 0 and d != 0)
                {
                    if (a * k < b)
                        break;
                    cout << 'G';
                    d--;
                    a--;
                }
            }
        }
    }
    return 0;
}