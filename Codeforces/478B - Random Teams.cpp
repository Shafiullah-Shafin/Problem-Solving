#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2], b[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int f = 0, s = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] != a[i]) {
            f = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (b[i] != a[i]) {
            s = i;
            break;
        }
    }
    bool ok = true;
    reverse(a + f, a + s + 1);
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            ok = false;
        }
    }
    if (!ok) cout << "no" << '\n';
    else cout << "yes" << '\n' << f + 1 << ' ' << s + 1 << '\n';
    return 0;
}

