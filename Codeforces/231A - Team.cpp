#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
        int one = 0;
        for (int j = 1; j <= 3; j++) {
            int x; cin >> x;
            if (x == 1)
                one++;
        }
        if (one >= 2)
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}

