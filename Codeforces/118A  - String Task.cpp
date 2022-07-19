#include<bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, ss = ""; cin >> s;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' ||
            s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'y' || s[i] == 'Y') {
            continue;
        }
        ss += '.';
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
        ss += s[i];
    }
    cout << ss << '\n';
    return 0;
}
