#include<bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int k, n; cin >> k;
        for (int i = 1; ; i++) {
            i64 x = (i * ((2 * 1) + (i - 1) * 2)) / 2;
            if (x >= k) {
                n = i;
                break;
            }
        }
        i64 pre = ((n - 1) * ((2 * 1) + ((n - 1) - 1) * 2)) / 2;
        i64 pos = (n * ((2 * 1) + ((n - 1) * 2))) / 2;
        int dif = pos - pre;
        int mid = dif / 2 + 1;
        mid = pre + mid;
        int row = 0, col = 0;
        if (k < mid) {
            for (int i = pre + 1; i < mid; i++) {
                row++;
                if (i == k) {
                    cout << row << ' ' << n << '\n';
                    break;
                }
            }
        }
        else if (k > mid) {
            for (int i = pos; i > mid; i--) {
                col++;
                if (i == k) {
                    cout << n << ' ' << col << '\n';
                    break;
                }
            }
        }
        else {
            cout << n << ' ' << n << '\n';
        }
    }
    return 0;
}


