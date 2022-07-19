#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    int mx = -1, mn = (1 << 30);
    int pos1 = n, pos2 = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] > mx) mx = v[i], pos1 = i + 1;
        if (v[i] <= mn) mn = v[i], pos2 = i + 1;
    }
    int tot = (pos1 - 1) + (n - pos2);
    if (pos1 > pos2) tot--;
    cout << tot << '\n';
    return 0;
}



