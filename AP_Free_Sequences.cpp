#include <iostream>
using namespace std;

int main()
{
    int t, n, i, j, k, l;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    // cout << i << " " << j << " " << k << endl;
                    if (a[j] - a[i] == a[k] - a[j])
                        flag = 0;
                }
            }
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
