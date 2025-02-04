#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  string a,b;
  int count = 0;
  for(int i = 0;i<n;i++){
    string temp;
    cin>>temp;
    if(i == 0 || a == temp){
        a = temp;
        count++;
    }
    else if(temp != a){
        b = temp;
    }
  }
  if(count>n/2) cout<<a<<endl;
  else cout<<b<<endl;

}

int32_t main(){
        solve();
    return 0;
}