#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    int odd = 0, even = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] & 1) odd++;
        else even++;
    }
    if (odd == 1) {
        for (int i = 1; i <= n; i++) {
            if (a[i] & 1) {
                cout << i << '\n';
                break;
            }
        }
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (!(a[i] & 1)) {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}
