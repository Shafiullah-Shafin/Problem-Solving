#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    set<string> se;
    while (n--) {
       string s; cin >> s;
       if (se.find(s) == se.end()) {
          se.insert(s);
          cout << "NO" << '\n';
       }
       else {
          cout << "YES" << '\n';
       }
    }
    return 0;
}

