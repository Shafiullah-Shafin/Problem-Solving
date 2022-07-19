#include <bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        i64 n, s; cin >> n >> s;
        i64 square = n * n;
        i64 tot = s / square;
        if (tot >= n + 1)
           cout << n +  1 << '\n';
        else
           cout << tot << '\n';
    }
    return 0;
}

