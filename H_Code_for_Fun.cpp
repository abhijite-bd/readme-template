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
vector<ll> v;
void func(ll n)
{
    while (n >= 2)
    {
        v.pb(n);
        n /= 2;
    }
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    ll t, n, i, j, k, l, r;
    cin >> n >> l >> r;
    func(n / 2);
    // for (auto e : v)
    //     cout << e << endl;
    vector<ll> v1 = v;
    reverse(all(v));
    // for (auto e : v)
    //     cout << e << endl;
    map<ll, string> mp;
    mp[1] = "1";
    mp[2] = "101";
    for (i = 0; i < v.size(); i++)
    {
        string st = "";
        st = mp[v[i] / 2] + to_string(v[i] % 2) + mp[v[i] / 2];
        mp[v[i]] = st;
    }
    string ans1 = mp[n / 2];
    string ans = mp[n / 2];
    ans += to_string(n % 2);
    ans += ans1;

    ll p = 0;
    for (i = l; i <= min(r, (ll)ans.size() - 1); i++)
    {
        if (ans[i] == '1')
            p++;
    }
    cout << p << endl;
    return 0;
}