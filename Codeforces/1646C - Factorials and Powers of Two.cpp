#include <bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    i64 cur = 1;
    vector<i64> factos;
    for (int i = 1; cur * i <= 10e12; i++) {
        cur *= i;
        factos.push_back(cur);
    }
    int sz = factos.size();
    int t; cin >> t;
    while (t--) {
       i64 n; cin >> n;
       int mn = 1e9;
       for (int mask = 0; mask < (1 << sz); mask++) {
           i64 sum = 0; int cnt = 0;
           for (int i = 0; i < sz; i++) {
               if ((mask >> i) & 1) {
                  sum += factos[i];
                  cnt++;
               }
           }
           mn = min (mn, cnt + __builtin_popcountll(n - sum));
       }
       cout << mn << "\n";
    }
    return 0;
}

