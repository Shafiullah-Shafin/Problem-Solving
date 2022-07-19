#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n, k; cin >> n >> k;
       vector<pair<int, int>> vr;
       for (int i = 0; i < n; i++) {
           int x; cin >> x;
           vr.push_back({x, i});
       }
       sort (vr.begin(), vr.end());
       int seg = 0;
       for (int i = 0; i < n; i++) {
           if (i && vr[i - 1].second != vr[i].second - 1)
               seg++;
       }
       seg++;
       if (seg <= k)
          cout << "YES" << '\n';
       else
          cout << "NO" << '\n';
    }
    return 0;
}
