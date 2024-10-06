#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  int upper = 0;
  for(int i = 0;i<s.length();i++){
    if(s[i] >= 65 && s[i]<97) upper++;
  }
  if(upper>s.length()/2){
    for(int i = 0;i<s.length();i++){
        if(s[i] >= 97){
            s[i] = 65 + (s[i]-97);
        }
    }
  }
  else{
    for(int i = 0;i<s.length();i++){
        if(s[i] >= 65 && s[i]<97){
            s[i] = 97 + (s[i]-65);
        }
    }
  }
  cout<<s<<endl;
}

int main(){
        solve();
    return 0;
}