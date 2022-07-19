#include<bits/stdc++.h>
using namespace std;

#define i64 long long
const int mx = 3e5 + 7;
int a[mx + 2];
i64 t[mx * 4];
i64 lazy[mx * 4];

void build(int node, int b, int e) {
     lazy[node] = 0;
     if (b == e) {
        t[node] = a[b];
        return;
     }
     int l = node * 2;
     int r = node * 2 + 1;
     int mid = (b + e) / 2;
     build(l, b, mid);
     build(r, mid + 1, e);
     t[node] = min(t[l], t[r]);
}
void propagate(int node, int b, int e) {
     if (lazy[node] == 0) return;
     t[node] += lazy[node];
     if (b != e) {
        int l = node * 2;
        int r = node * 2 + 1;
        lazy[l] += lazy[node];
        lazy[r] += lazy[node];
     }
     lazy[node] = 0;
}
void update(int node, int b, int e, int i, int j, int x) {
     propagate(node, b, e);
     if (i > e || j < b) return;
     if (i <= b && j >= e) {
        lazy[node] += x;
        propagate(node, b, e);
        return;
     }
     int l = node * 2;
     int r = node * 2 + 1;
     int mid = (b + e) / 2;
     update(l, b, mid, i, j, x);
     update(r, mid + 1, e, i, j, x);
     t[node] = min(t[l], t[r]);
}
i64 query(int node, int b, int e, int i, int j) {
    propagate(node, b, e);
    if (i > e || j < b) return 1e18 + 9;
    if (i <= b && j >= e) return t[node];
    int l = node * 2;
    int r = node * 2 + 1;
    int mid = (b + e) / 2;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    int m; cin >> m;
    m++;
    while (m--) {
        string s; vector<int> v;
        getline(cin, s);
        stringstream ss(s);
        int input;
        while (ss >> input) v.push_back(input);
        int sz = v.size();
        if (sz == 0) continue;
        if (sz == 2) {
           int i = v[0] + 1, j = v[1] + 1;
           if (i > j) {
              i64 x = query(1, 1, n, 1, j);
              i64 y = query(1, 1, n, i, n);
              cout << min(x, y) << '\n';
           }
           else {
              i64 x = query(1, 1, n, i, j);
              cout << x << '\n';
           }
        }
        else {
           int i = v[0] + 1, j = v[1] + 1, x = v[2];
           if (i > j) {
              update(1, 1, n, 1, j, x);
              update(1, 1, n, i, n, x);
           }
           else {
              update(1, 1, n, i, j, x);
           }
        }
    }
    return 0;
}
