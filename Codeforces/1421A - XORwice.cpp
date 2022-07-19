#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int val = a + b;
        for (int i = 0; i <= 30; i++) {
            if (((a >> i) & 1) && ((b >> i) & 1))
                val -= pow (2, i + 1);
        }
        cout << val << '\n';
    }
    return 0;
}

