#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, k; cin >> n >> k;
    long long mid = (n + 1) / 2;
    if (k <= mid) cout << 2 * k - 1 << '\n';
    else cout << (k - mid) * 2 << '\n';
    return 0;
}

