#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int house[100006];
    for (int i = 0; i < m; i++) {
        cin >> house[i];
    }
    long long dis, tot = 0, cur = 1;
    for (int i = 0; i < m; i++) {
        if (house[i] >= cur)
            dis = house[i] - cur;
        else
            dis = n - (cur - house[i]);
        tot += dis;
        cur = house[i];
    }
    cout << tot << '\n';
    return 0;
}
