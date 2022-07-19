#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, b, d; cin >> n >> b >> d;
    int tot = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x > b) continue;
        tot += x;
        if (tot > d) {
            tot = 0;
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
