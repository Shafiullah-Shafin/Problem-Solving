#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i + 2 < n; ) {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') {
            cnt++;
            i += 3;
        }
        else
            i++;
    }
    while (q--) {
        int i; char ch;
        cin >> i >> ch;
        if (s[i - 1] == ch) {
            cout << cnt << '\n';
            continue;
        }

        if (s[i - 1] == 'a' && s[i] == 'b' && s[i + 1] == 'c') {
                cnt--;
        }
        else if (s[i - 1] == 'b' && s[i - 2] == 'a' && s[i] == 'c') {
                cnt--;
        }
        else if (s[i - 1] == 'c' && s[i - 2] == 'b'&& s[i - 3] == 'a') {
                cnt--;
        }

        s[i - 1] = ch;
        if (s[i - 1] == 'a' && s[i] == 'b' && s[i + 1] == 'c') {
                cnt++;
        }
        else if (s[i - 1] == 'b' && s[i - 2] == 'a'&& s[i] == 'c') {
                cnt++;
        }
        else if (s[i - 1] == 'c' && s[i - 2] == 'b' && s[i - 3] == 'a') {
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
