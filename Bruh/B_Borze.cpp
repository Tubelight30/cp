#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;
  int i = 0;
  if(s[0] == '.'){
    cout<<'0';
    i = 1;
  }
  for(i;i<s.length();){
    if(s[i] == '-'&& s[i+1] == '.'){
        cout<<'1';
        i= i+2;
    }else if(s[i] == '-' && s[i+1] == '-'){
        cout<<'2';
        i = i+2;
    }else if(s[i] == '.'){
        cout<<'0';
        i++;
    }
  }
}

int main(){
        solve();

    return 0;
}
