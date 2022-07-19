#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int Poja_Verdon = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        Poja_Verdon += x;
    }
    cout << Poja_Verdon << '\n';
    return 0;
}






