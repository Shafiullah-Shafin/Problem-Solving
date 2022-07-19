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
            int x; cin >> x;
            mp[x]++;
        }
        int sz = mp.size();
        int tmp = sz + 1;
        for (int i = 1; i <= n; i++) {
            if (i <= sz) {
               cout << sz << ' ';
            }
            else {
               cout << tmp << ' ';
               tmp++;
            }
        }
        cout << '\n';
    }
    return 0;
}

