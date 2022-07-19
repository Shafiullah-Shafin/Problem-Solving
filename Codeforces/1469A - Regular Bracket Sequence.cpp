#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       string s; cin >> s;
       int l = s.size();
       if (l % 2 == 0 && s.front() != ')' && s.back() != '(') {
          cout << "YES" << '\n';
       }
       else {
          cout << "NO" << '\n';
       }
    }
    return 0;
}
