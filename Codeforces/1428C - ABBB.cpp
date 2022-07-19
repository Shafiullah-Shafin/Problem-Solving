#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int sz = s.size();
        vector<char> v;
        for (auto ch : s) {
            if (ch == 'B') {
               if(v.empty()) v.push_back(ch);
               else v.pop_back();
            }
            else v.push_back(ch);
        }
        cout << v.size() << '\n';
    }
    return 0;
}
