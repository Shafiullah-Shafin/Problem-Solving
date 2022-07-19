#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int sz = s.size();
    int last = -1;
    for (int i = 0; i < sz; i++) {
        if (s[i] == '@') last = i;
    }
    if (last == -1) {
        cout << "No solution" << '\n';
        return 0;
    }
    string t = "";
    for (int i = 0; i < sz; i++) {
        t += s[i];
        if (s[i] != '@') continue;
        if (i == 0 || i + 1 == sz || s[i + 1] == '@' || s[i - 1] == '@' || t[t.size() - 2] == ',') {
            cout << "No solution" << endl;
            return 0;
        }
        i++;
        t += s[i];
        if (i - 1 != last) t += ",";
    }
    cout << t << '\n';
    return 0;
}
