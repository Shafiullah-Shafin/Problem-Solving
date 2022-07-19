#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       string s; cin >> s;
       char ch; cin >> ch;
       vector<int> v;
       for (int i = 0; i < s.size(); i++) {
           if (s[i] == ch) {
              v.push_back(i + 1);
           }
       }
       bool tt = false;
       for (int i = 0; i < v.size(); i++) {
           if (v[i] & 1) {
              tt = true;
              break;
           }
       }
       cout << (tt ? "YES" : "NO") << '\n';
    }
    return 0;
}

