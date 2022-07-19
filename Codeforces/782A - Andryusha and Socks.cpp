#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    set<int> se;
    int mx = 0;
    for (int i = 1; i <= 2 * n; i++) {
        int x; cin >> x;
        if (se.find(x) == se.end()) {
            se.insert(x);
        }
        else {
            se.erase(x);
        }
        mx = max (mx, (int)se.size());
    }
    cout << mx << '\n';
    return 0;
}
