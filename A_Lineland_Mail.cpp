#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    for(int i=0; i<n; i++) {
        int minDist, maxDist;
        if(i == 0) {
            minDist = abs(x[i+1] - x[i]);
            maxDist = abs(x[n-1] - x[i]);
        }
        else if(i == n-1) {
            minDist = abs(x[i] - x[i-1]);
            maxDist = abs(x[i] - x[0]);
        }
        else {
            minDist = min(abs(x[i] - x[i-1]), abs(x[i+1] - x[i]));
            maxDist = max(abs(x[i] - x[0]), abs(x[n-1] - x[i]));
        }
        cout << minDist << " " << maxDist << endl;
    }
    return 0;
}
