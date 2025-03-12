#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'
void solve(){
  string s;
  cin>>s;

  if(((int)s[0] == 89 || (int)s[0] == 121)&&( (int)s[1] == 69 || (int)s[1] == 101) && ((int)s[2]==83 || (int)s[2]==115)){
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO"<<endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}