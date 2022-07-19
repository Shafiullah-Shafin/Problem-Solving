#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long l, r, dif; cin >> l >> r;
    dif = r - l;
    dif = (dif + 1) / 2;
    cout << "YES" << '\n';
    for (int i = 1; i <= dif; i++) {
        cout << l << ' ' << l + 1 << '\n';
        l += 2;
    }
    return 0;
}
