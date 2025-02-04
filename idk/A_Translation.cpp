#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string a,b;
  cin>>a;
  cin>>b;
  if(a.length() != b.length()){
    cout<<"NO"<<endl;
    return;
  }
  int i = 0;
  int j = b.length()-1;
  while(j>=0){
    if(a[i] != b[j]){
        cout<<"NO"<<endl;
        return;
    }
    i++;
    j--;
  }
  cout<<"YES"<<endl;

}

int32_t main(){
        solve();
    return 0;
}