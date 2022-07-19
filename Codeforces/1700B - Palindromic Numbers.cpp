#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        if (s[0] != '9') {
           for (int i = 0; i < n; i++) {
               cout << '9' - s[i];
           }
           cout << '\n';
        }
        else {
           vector<int> v; int x, y = 0, z;
           for (int i = n - 1; i >= 0; i--) {
               x = s[i] - '0';
               x += y;
               if (x > 1) {
                  z = 11 - x;
                  y = 1;
               }
               else {
                  z = 1 - x;
                  y = 0;
               }
               v.push_back(z);
           }
           reverse(v.begin(), v.end());
           for (auto x : v) {
               cout << x;
           }
           cout << '\n';
        }
    }
    return 0;
}

