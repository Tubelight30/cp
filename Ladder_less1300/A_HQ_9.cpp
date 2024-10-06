#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string s;
  cin>>s;
  for(auto ele : s){
    if(ele == 'H' || ele == 'Q' || ele == '9'){
        cout<<"YES"<<endl;
        return;
    }
  }
  cout<<"NO"<<endl;

}

int32_t main(){
        solve();
    return 0;
}