#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int mx = max(n, m);
    int cnt = 0;
    for (int a = 0; a <= mx; a++) {
        for (int b = 0; b <= mx; b++) {
            if (((a * a) + b == n) && (a + (b * b) == m)) cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
