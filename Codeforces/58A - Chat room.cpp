#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int sz = s.size();
    bool tt = false;
    for (int i = 0; i < sz; i++) {
        if (s[i] == 'h') {
           for (int j = i + 1; j < sz; j++) {
               if (s[j] == 'e') {
                  for (int k = j + 1; k < sz; k++) {
                      if (s[k] == 'l') {
                         for (int l = k + 1; l < sz; l++) {
                             if (s[l] == 'l') {
                                 for (int m = l + 1; m < sz; m++) {
                                     if (s[m] == 'o') {
                                        tt = true;
                                     }
                                 }
                             }
                         }
                      }
                  }
               }
           }
        }
    }
    cout << (tt ? "YES" : "NO") << '\n';
    return 0;
}
