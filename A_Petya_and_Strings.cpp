#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string a,b;
  cin>>a;
  cin>>b;
  for(int i = 0;i<a.length();i++){
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
  }
  if(a<b){
    cout<<-1<<endl;
  }else if(a==b){
    cout<<0<<endl;
  }else{
    cout<<1<<endl;
  }
  
}

int32_t main(){
        solve();
    return 0;
}