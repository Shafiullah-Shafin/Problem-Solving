#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    set<char> st(s.begin(), s.end());
    if (k <= n) {
        for (int i = k - 1; i >= 0; i--) {
            auto it = st.upper_bound(s[i]);
            if (it == st.end()) {
                s[i] = *st.begin();
                continue;
            }
            else {
                s[i] = *it;
                break;
            }
        }
        string t = s.substr(0, k);
        cout << t << '\n';
    }
    else {
        string t = s;
        for (int i = n; i < k; i++) {
            t += *st.begin();
        }
        cout << t << '\n';
    }
    return 0;
}
