#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
      string s, ss = ""; cin >> s;
      int i, sz = s.size();
      for (i = 0; i < sz; ) {
          step :
          bool tt = false;
          for (int j = i + 1; j < sz; j++) {
              if (s[i] == s[j]) {
                  tt = true;
                  i++;
                  goto step;
              }
          }
          if (!tt) {
             break;
          }
      }
      for (int j = i; j < sz; j++) {
          ss += s[j];
      }
      cout << ss << '\n';
    }
    return 0;
}

