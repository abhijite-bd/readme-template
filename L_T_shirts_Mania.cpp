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
    int n, i, j, k, l;
    map<string, int> mp;
    vector<string> siz = {"S", "M", "L", "XL", "XXL", "XXXL"};
    for (i = 0; i < 6; i++)
    {
        cin >> k;
        mp[siz[i]] = k;
    }
    string s;
    int flag = 1;
    cin >> n;
    vector<string> v(n), ans(n, "0");
    for (i = 0; i < n; i++)
    {
        cin >> s;
        v.pb(s);
        if (s.find(',') < s.size())
        {
            v[i] = s;
        }
        else
        {
            ans[i] = s;
            mp[s]--;
        }
        if (mp[s] < 0)
            flag = 0;
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        
    }
    if (flag)
    {
        cout << "YES" << endl;
        for (i = 0; i < n; i++)
        {
            cout << ans[i] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}