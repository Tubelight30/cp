#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long int n;
  cin>>n;
  string num = to_string(n);
  int count = 0;
  for(int i = 0;i<num.length();i++){
    if(num[i]-48 == 4 || num[i]-48 == 7){
        count++;
    }
  }
  string c = to_string(count);
  for(int i = 0;i<c.length();i++){
    if(c[i]-48 != 4 && c[i]-48 != 7){
        cout<<"NO"<<endl;
        return;
    }
  }
  cout<<"YES"<<endl;    
}

int main(){
        solve();
    return 0;
}