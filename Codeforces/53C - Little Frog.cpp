#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 1, j = n; i <= j; i++, j--) {
        if (i < j)
           cout << i << ' ' << j << ' ';
        else
           cout << i << '\n';
    }
    return 0;
}


