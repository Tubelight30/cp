#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int maxlen = 1; 
    int currlen = 1;


    for (int i = 1; i < n; i++) {
        if (v[i] >= v[i - 1]) {
            currlen++;
        } else {
            currlen = 1;
        }
        maxlen = max(maxlen, currlen);
    }

    for (int i = 0; i < n; i++) {
        int original = v[i];
        v[i] *= x;

        currlen = 1;
        for (int j = 1; j < n; j++) {
            if (v[j] >= v[j - 1]) {
                currlen++;
            } else {
                currlen = 1;
            }
            maxlen = max(maxlen, currlen);
        }

        v[i] = original;
    }

    cout << maxlen << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}