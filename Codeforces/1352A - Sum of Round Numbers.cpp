#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       string n; cin >> n;
       int sz = n.size();
       int cnt = 0;
       for (int i = 0; i < sz; i++) {
           if (n[i] != '0') {
              cnt++;
           }
       }
       cout << cnt << '\n';
       int mul = 1;
       for (int i = sz - 1; i >= 0; i--) {
           if (i < sz - 1)
               mul *= 10;
           if (n[i] != '0')
              cout << (n[i] - '0') * mul << ' ';
       }
       cout << '\n';
    }
    return 0;
}



