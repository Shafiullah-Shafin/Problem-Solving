#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int x, sz = s.length();
    for (int i = 0; i < sz; i++) {
        if (s[i] == '8' || s[i] == '0') {
            cout<<"YES" << '\n' << s[i] << '\n';
            return 0;
        }
    }
    for (int i = 0; i < sz - 1; i++) {
        for (int j = i + 1; j < sz; j++) {
            x = (s[i] - '0') * 10 + (s[j] - '0');
            if (x % 8 == 0) {
               cout<<"YES" << '\n' << x << '\n';
               return 0;
            }
        }
    }
    for (int i = 0; i < sz - 2; i++) {
        for (int j = i + 1; j < sz - 1; j++) {
            for (int k = j + 1; k < sz; k++) {
                x = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (x % 8 == 0) {
                   cout<<"YES" << '\n' << x << '\n';
                   return 0;
                }
            }
        }
    }
    cout << "NO" << '\n';
    return 0;
}



