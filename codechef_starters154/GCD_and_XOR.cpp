#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool eq = true;
    bool div = true;
    bool xorr = false;

    for (int i = 0; i < n; i++) {
        if (a[i] != k) eq = false;
        if (a[i] % k != 0) div = false;
        if (a[i] < k ) xorr = true;
    }

    int operations = 0;
    if (!eq) {
        if (div) operations = 1;
        else if (xorr) operations = 2;
        else operations = 1;
    }

    cout << operations << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

