#include <bits/stdc++.h>
using namespace std;

void solve() {
    double d, x, y;
    cin >> d >> x >> y;
    
    if (y >= x) {
        cout << 0 << endl;
        return;
    }
    
    for (int i = 1; i <= 50; i++) { 
        y -= 1; 
        if (y < 0) {
            cout << -1 << endl;
            return;
        }
        
        double discounted_price = x * (100 - i * d) / 100;
        if (y >= discounted_price) {
            cout << i << endl;
            return;
        }
    }
    
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
