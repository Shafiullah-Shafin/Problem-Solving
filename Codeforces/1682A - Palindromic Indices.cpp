#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;
        if (n & 1) {
           int mid = n / 2 + 1;
           for (int i = mid; i < n; i++) {
               if (s[i] == s[i - 1]) cnt++;
               else break;
           }
           cout << cnt * 2 + 1 << '\n';
        }
        else {
           int mid = n / 2;
           for (int i = mid; i < n; i++) {
               if (s[i] == s[i - 1]) cnt++;
               else break;
           }
           cout << cnt * 2 << '\n';
        }
    }
    return 0;
}
