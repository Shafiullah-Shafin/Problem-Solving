#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    bool even = false, odd = false;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] & 1) odd = true;
        else even = true;
    }
    if (even && odd) {
        sort (a + 1, a + n + 1);
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}

