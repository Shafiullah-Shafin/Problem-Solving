#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    char a[n + 2];
    string s = "";
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    if (n == 2) {
        cout << a[1] << a[2] << '\n';
        return 0;
    }
    if (n == 3) {
        cout << a[1] << a[2] << a[3] << '\n';
        return 0;
    }
    if (n % 2) {
        int k = 1;
        for ( ; k <= (n / 2 - 2) * 2; k += 2) {
            s += a[k];
            s += a[k + 1];
            s += "-";
        }
        s += a[k];
        s += a[k + 1];
        s += a[k + 2];
        s += "-";
        k += 3;
        for (int i = k; i <= n; i += 2) {
            if (i + 1 != n) {
                s += a[i];
                s += a[i + 1];
                s += "-";
            }
            else {
                s += a[i];
                s += a[i + 1];
            }
        }
    }
    else {
        for (int k = 1; k <= n; k += 2) {
            if (k + 1 != n) {
                s += a[k];
                s += a[k + 1];
                s += "-";
            }
            else {
                s += a[k];
                s += a[k + 1];
            }
        }
    }
    cout << s << '\n';
    return 0;
} 
