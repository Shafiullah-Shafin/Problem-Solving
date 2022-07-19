#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    for (int  i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool tt = false;
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
           if ((mask >> i) & 1) {
              sum += a[i];
           }
           else {
              sum -= a[i];
           }
        }
        if (abs(sum) % 360 == 0) {
            tt = true;
            break;
        }
    }
    if (tt) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}

