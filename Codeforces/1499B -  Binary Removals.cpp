#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
      string s; cin >> s;
      int sz = s.size();
      int sfx = 0;
      int pre = sz - 1;
      for (int i = 0; i < sz - 1; i++) {
          if (s[i] == '1' && s[i + 1] == '1') {
              pre = i + 1;
              break;
          }
      }
      for (int i = sz - 1; i >= 1; i--) {
          if (s[i] == '0' && s[i - 1] == '0') {
              sfx = i - 1;
              break;
          }
      }
      if (pre < sfx)
         cout << "NO" << '\n';
      else
         cout << "YES" << '\n';
    }
    return 0;
}
