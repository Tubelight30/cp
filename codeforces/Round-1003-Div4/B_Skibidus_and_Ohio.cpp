#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  for(int i = 0;i<n;i++){
    string s;
    cin>>s;
    bool done = false;
    for(int i = 0;i<s.length()-1;i++){
        if(s[i] == s[i+1]){
            cout<<1<<endl;
            done = true;
            break;
        }
    }
    if(done == false){
        cout<<s.length()<<endl;
    }

  }
}

int32_t main(){
        solve();
    return 0;
}