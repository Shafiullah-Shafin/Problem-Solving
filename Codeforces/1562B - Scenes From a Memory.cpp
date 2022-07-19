#include<bits/stdc++.h>
using namespace std;

bool isnotprime(int n) {
     for (int i = 2; i * i <= n; i++) {
         if (n % i == 0) return true;
     }
     return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int k; cin >> k;
        string s; cin >> s;
        bool ok = false;
        for (int i = 0; i < k; i++) {
            if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
                cout << 1 << '\n' << s[i] << '\n';
                ok = true;
                break;
            }
        }
        if (ok) continue;
        for (int i = 0; i < k && (!ok); i++) {
            for (int j = i + 1; j < k && (!ok); j++) {
                int n = (int)(s[i] - '0') * 10 + (int)(s[j] - '0');
                if (isnotprime(n)) {
                    cout << 2 << '\n' << s[i] << s[j] << '\n';
                    ok = true;
                }
            }
        }
    }
    return 0;
}
