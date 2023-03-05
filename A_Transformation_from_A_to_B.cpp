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
    ll a, b, flag = 0;
    cin >> a >> b;
    vector<int> v;
    v.pb(b);
    while (a <= b)
    {
        if (a == b)
        {
            flag = 1;
            break;
        }
        if (b % 2 == 1)
        {
            if (b % 10 == 1)
            {
                b /= 10;
                v.pb(b);
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else
        {
            b /= 2;
            v.pb(b);
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        reverse(all(v));
        cout << v.size() << endl;
        for (auto e : v)
            cout << e << ss;
        cout << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}