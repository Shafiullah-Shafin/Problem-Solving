#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int cnt = 0, n; cin >> n;
        for (int i = 1; i <= 9; i++) {
            long long j = 0;
            while (j <= n) {
                cnt++;
                j = j * 10 + i;
            }
            if (j > n) cnt--;
        }
        cout << cnt << '\n';
    }
    return 0;
}
