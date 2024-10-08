#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int lb,bh,lh;
  cin>>lb>>bh>>lh;
  int b2 = lb*bh;
  int b = sqrt(b2/lh);

  int l = lb/b;
  int h = lh/l;
  cout<<4*(l+b+h)<<endl;

}

int32_t main(){
        solve();
    return 0;
}