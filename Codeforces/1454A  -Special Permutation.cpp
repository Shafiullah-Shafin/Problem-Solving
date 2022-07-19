#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 2];
        int num = n;
        for (int i = 1; i <= n; i++) {
            a[i] = num;
            num--;
        }
        if (n & 1) swap(a[n / 2], a[n / 2 + 1]);
        for (int i = 1; i <= n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

