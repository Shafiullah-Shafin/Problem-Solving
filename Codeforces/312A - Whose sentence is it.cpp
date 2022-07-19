#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t --) {
        string s; getline(cin, s);
        int n = s.size();
        if (n < 5) cout << "OMG>.< I don't know!" << '\n';
        else if (s.substr(0, 5) != "miao." && s.substr(n - 5) == "lala.") cout << "Freda's" << '\n';
        else if (s.substr(0, 5) == "miao." && s.substr(n - 5) != "lala.") cout << "Rainbow's" << '\n';
        else cout << "OMG>.< I don't know!" << '\n';
    }
    return 0;
}

