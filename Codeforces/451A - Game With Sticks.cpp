#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    if (n > m) swap (n, m);
    cout << ((n & 1) ? "Akshat" : "Malvika") << '\n';
    return 0;
}



