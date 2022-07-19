#include<bits/stdc++.h>
using namespace std;

int a[200005];
vector<int> vr[200005];

int main() {
    int n, x, p; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        p = lower_bound(a, a+n+1, x) - a - 1;
        a[p] = x;
        vr[p].push_back(x);
    }
    for (int i = n; i >= 0 && (int)vr[i].size(); i--) {
        for (int j = 0; j < vr[i].size(); j++) {
            cout << vr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
