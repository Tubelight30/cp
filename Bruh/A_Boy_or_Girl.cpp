#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin>>s;

  unordered_set<char> s1;
  int count = 0;   
  for(int i = 0;i<s.size();i++){
    // arr[s[i]]
    s1.insert(s[i]);
    }
    if(s1.size()%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}

int main(){
    int t = 1;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}
