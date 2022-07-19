#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;
    int ant = 0, dan = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') ant++;
        else dan++;
    }
    if (ant == dan) cout << "Friendship" << '\n';
    else cout << ((ant > dan) ?  "Anton" : "Danik") << '\n';
    return 0;
}
