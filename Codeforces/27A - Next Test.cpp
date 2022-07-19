#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    bool a[3002] = {0};
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        a[x] = 1;
    }
    for (int i = 1; i <= 3002; i++) {
        if (!a[i]) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}

