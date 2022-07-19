#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n + 2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
		        if (a[i] == a[j] + a[k]) {
		            cout << i + 1 << ' ' << j + 1 << ' ' << k + 1 << '\n';
                    return 0;
		        }
            }
		}
	}
    cout << -1 << '\n';
    return 0;
}


