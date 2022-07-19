#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, t; cin >> s >> t;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) s[i] += 32;
        if (t[i] >= 65 && t[i] <= 90) t[i] += 32;
    }
    int ans = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == t[i]) continue;
        else if (s[i] > t[i]) {
            ans = 1;
            break;
        }
        else if (s[i] < t[i]) {
            ans = -1;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}
