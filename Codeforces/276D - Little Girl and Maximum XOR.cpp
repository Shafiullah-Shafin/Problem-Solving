#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long l, r; cin >> l >> r;
    int msb = -1;
    for (int i = 62; i >= 0; i--) {
        if (((l >> i) & 1) != ((r >> i) & 1)) {
            msb = i;
            break;
        }
    }
    if (msb == -1) {
        cout << 0 << '\n';
    }
    else {
        cout << (1LL << msb + 1) - 1 << '\n';
    }
    return 0;
}
