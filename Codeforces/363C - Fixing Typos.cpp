#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    string t = "";
    int sz = s.size();
    for (int i = 0, k = 0; i < sz; i++) {
        if (k >= 2 && s[i] == t[k - 1] && s[i] == t[k - 2]) continue;
        if (k >= 3 && s[i] == t[k - 1] && t[k - 2] == t[k - 3]) continue;
        t += s[i], k++;
    }
    cout << t << '\n';
    return 0;
}
