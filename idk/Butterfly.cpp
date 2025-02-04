#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long r,g,b;
  cin>>r>>g>>b;
  if ((r <= g + b) && (g <= r + b) && (b <= r + g)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}