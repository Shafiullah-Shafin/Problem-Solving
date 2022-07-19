#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       string s; cin >> s;
       set<char> se;
       bool tt = true;
       for (int i = 0; i < 6; i++) {
           if (s[i] >= 97 && s[i] <= 122) {
              se.insert(s[i]);
           }
           if (s[i] >= 65 && s[i] <= 90 && se.find(s[i] + 32) == se.end()) {
              tt = false;
              break;
           }
       }
       if (tt) {
          cout << "YES" << '\n';
       }
       else {
          cout << "NO" << '\n';
       }
    }
    return 0;
}

