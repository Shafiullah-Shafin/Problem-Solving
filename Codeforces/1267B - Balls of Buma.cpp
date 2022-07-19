#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    stack<int> st;
    bool ok = true;
    for (int i = 0, j = s.size() - 1; i <= j; ) {
        if (s[i] == s[j]) {
            char ch = s[i];
            int cnt = 0;
            while (s[i] == ch && i < j) {
                cnt++;
                i++;
            }
            while (s[j] == ch && i <= j) {
                cnt++;
                j--;
            }
            st.push(cnt);
        }
        else {
            ok = false;
            break;
        }
    }
    int ans = 0;
    if (ok && st.top() >= 2) {
        ans = st.top() + 1;
        st.pop();
        while (st.size()) {
            if (st.top() < 3) {
                ok = false;
                break;
            }
            st.pop();
        }
    }
    if (ok) cout << ans << '\n';
    else cout << 0 << '\n';
    return 0;
}


