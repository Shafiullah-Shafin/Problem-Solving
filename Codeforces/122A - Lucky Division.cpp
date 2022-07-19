#include<bits/stdc++.h>
using namespace std;

bool lucky(string s) {
     int sz = s.size();
     for (int i = 0; i < sz; i++) {
         if (s[i] == '7' || s[i] == '4') {
            continue;
         }
         else {
            return false;
         }
     }
     return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    bool ok = false;
    for (int i = 0; i <= n; i++) {
        string s = to_string(i);
        if (lucky(s)) {
            if (n % i == 0) {
                ok = true;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}



