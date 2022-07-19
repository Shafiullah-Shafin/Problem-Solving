#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string s = to_string(n);
    int sz = s.size();
    bool yo =  true;
    for (int i = 0; i < sz; i++) {
        if (s[0] == '4') {
            yo = false;
            break;
        }
        if (s[i] != '1' && s[i] != '4') {
            yo = false;
            break;
        }
        if (s[i] == '4') {
           int j = i + 1, cnt = 1;
           for ( ; j < sz; j++) {
               if (s[j] == '4') cnt++;
               if (s[j] != '4') break;
           }
           if (cnt > 2) {
               yo = false;
               break;
           }
           i = j - 1;
        }
    }
    cout << (yo ? "YES" : "NO") << '\n';
    return 0;
}
