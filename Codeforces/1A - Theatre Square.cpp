#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a; cin >> n >> m >> a;
    long long x = ceil((n * 1.0) / a);
    long long y = ceil((m * 1.0) / a);
    cout << x * y << '\n';
    return 0;
}
