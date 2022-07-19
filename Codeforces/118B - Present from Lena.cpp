#include<bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int gap = 2 * n, mx = 0;
    for (int i = 1; i <= n + 1; i++) {
        for (int g = 1; g <= gap; g++) {
            cout << ' ';
        }
        for (int j = 0; j <= mx; j++) {
            if (j == 0 && i == 1) cout << j << '\n';
            else cout << j << ' ';
        }
        for (int j = mx - 1; j >= 0; j--) {
            if (j == 0) cout << j << '\n';
            else cout << j << ' ';
        }
        gap -= 2;
        mx++;
    }
    gap = 2, mx = n - 1;
    for (int i = n + 1 - 1; i >= 1; i--) {
        for (int g = 1; g <= gap; g++) {
            cout << ' ';
        }
        for (int j = 0; j <= mx; j++) {
            if (j == 0 && i == 1) cout << j << '\n';
            else cout << j << ' ';
        }
        for (int j = mx - 1; j >= 0; j--) {
            if (j == 0) cout << j << '\n';
            else cout << j << ' ';
        }
        gap += 2;
        mx--;
    }
    return 0;
}
