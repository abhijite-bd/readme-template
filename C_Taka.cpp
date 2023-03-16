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
int check(int a, int b, int c, int x)
{
    while (x >= 500 and a > 0)
        x -= 500, a--;
    while (x >= 100 and b > 0)
        x -= 100, b--;
    while (x >= 50 and c > 0)
        x -= 50, c--;
    return !x;
}
ll cs = 1;
const int N = 2e5 + 10;
const int M = 1e9 + 7;
int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int taka = 0;
    int p = a;
    int flag = check(a, b, c, x);
    if (flag)
    {
        
    }
    else
        cout << "0" << endl;
    return 0;
}