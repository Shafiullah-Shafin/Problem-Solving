#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int a, b, n; cin >> a >> b >> n;
		int ans = 0;
		while (a <= n && b <= n) {
			if (a < b) a += b;
			else b += a;
			ans++;
		}
		cout << ans << '\n';
	}
    return 0;
}

