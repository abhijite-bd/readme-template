#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, t, idx;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            a[i] += a[i - 1];
    }
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++)
        cin >> q[i];
    for (int i = 0; i < m; i++)
    {
        int idx = lower_bound(a.begin(), a.end(), q[i]) - a.begin();
        cout << (idx + 1) << endl;
    }
    return 0;
}
