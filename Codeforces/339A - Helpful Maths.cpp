#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    sort(s.begin(), s.end());
    int pos = 0, sz = s.size();
    for (int i = 0; i < sz; i++) {
        if (s[i] != '+') {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < sz; i++) {
        if (i != sz - 1) {
            cout << s[i] << '+';
        }
        else {
            cout << s[i] << '\n';
        }
    }
    return 0;
}
