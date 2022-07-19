#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       string s; cin >> s;
       int sz = s.size();
       int pos, mn = 200;
       for (int i = 0; i < sz; i++) {
           mn = min (mn, s[i] - 'a');
           if (mn == s[i] - 'a') {
              pos = i;
           }
       }
       string a = "", b = "";
       for (int i = 0; i < sz; i++) {
           if (i != pos) b += s[i];
           else a = s[pos];
       }
       cout << a << ' ' << b << '\n';
    }
    return 0;
}


