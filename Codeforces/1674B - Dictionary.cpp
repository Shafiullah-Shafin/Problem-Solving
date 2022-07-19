#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int a = (s[0] - 97) * 25;
        int b = (s[1] - 96);
        if (s[1] > s[0]) cout << a + b - 1 << '\n';
        else cout << a + b << '\n';
    }
    return 0;
}

