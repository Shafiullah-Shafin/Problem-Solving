#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int n; cin >> n;
       map<int, int> mp;
       for (int i = 1; i <= n; i++) {
           int k; cin >> k;
           while (k % 2 == 0) {
              k = k / 2;
              mp[k]++;
           }
       }
       cout << (int)mp.size() << '\n';
    }
    return 0;
}


