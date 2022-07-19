#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while (n--) {
        string s; cin >> s;
        int sz = s.size();
        if (sz > 10)
            cout << s[0] << sz - 2 << s[sz - 1] << '\n';
        else
            cout << s << '\n';
    }
    return 0;
}
