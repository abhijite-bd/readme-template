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
    ll n, i, j, k, l;
    cin >> n;
    ll a[n];
    ll sum = 0;
    int zero = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 0)
            zero++;
    }
    if (zero == n)
    {
        cout << n - 1 << endl;
        return 0;
    }
    if (sum % 3 == 0)
    {
        ll ans = 0;
        ll first = 0, sec = 0;
        sum /= 3;
        for (i = 0; i < n - 2; i++)
        {
            first += a[i];
            if (first == sum)
            {
                break;
            }
        }
        int x = 1;
        for (j = i + 1; j < n - 1; j++)
        {
            if ((x and a[j] == 0))
                continue;
            sec += a[j];
            if (sec == sum)
                break;
            x = 0;
        }
        // cout << first << ss << sec << endl;
        if (first == sec and first == sum)
        {
            ans++;
            for (i = i + 1; i < n - 2; i++)
            {
                if (a[i] == 0)
                    ans++;
                else
                    break;
            }
            for (j = j + 1; j < n - 1; j++)
            {
                if (a[j] == 0)
                    ans++;
                else
                    break;
            }
        }
        cout << ans << endl;
    }
    else
        cout << 0 << endl;

    return 0;
}
// 00000
// 0 0 000
// 0 00 00
// 0 000 0
// 00 0 00
// 00 00 0
// 0000
// 0 0 00
// 0 00 0
// 00 0 0