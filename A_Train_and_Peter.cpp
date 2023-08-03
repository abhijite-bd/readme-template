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
#define memset(x, y) memset(x, y, sizeof(x))
vector<pair<int, int>> h_movements = {{2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {-2, 1}, {-2, -1}};
vector<pair<int, int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<pair<int, int>> d_movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
ll n, m, i, j;
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
    string s, s1, s2;
    cin >> s >> s1 >> s2;
    bool f1, f2;
    f1 = f2 = 0;
    if (s.find(s1) <= s.size())
    {
        int x = s.find(s1) + s1.size();
        string s3 = s.substr(x, s.size() - x + 1);
        if (s3.find(s2) <= s3.size())
            f1 = true;
    }
    reverse(all(s));
    if (s.find(s1) <= s.size())
    {
        int x = s.find(s1) + s1.size();
        string s3 = s.substr(x, s.size() - x + 1);
        if (s3.find(s2) <= s3.size())
            f2 = true;
    }

    if (f1 and f2)
        cout << "both\n";
    else if (f1)
        cout << "forward\n";
    else if (f2)
        cout << "backward\n";
    else
        cout << "fantasy\n";

    return 0;
}