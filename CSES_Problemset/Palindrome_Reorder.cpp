#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string s;
  cin>>s;
  unordered_map<char,int> mp;
  for(int i  = 0;i<s.length();i++){
    mp[s[i]]++;
  }
  int odd = 0;
  for(auto ele: mp){
    if(ele.second%2 != 0){
        odd++;
    }
    if(odd>1){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
  }
  string pali = "";
  string odds = "";
  for(auto ele: mp){
    if(ele.second%2 == 0){
        for(int i = 0;i<ele.second/2;i++) pali+= ele.first;
    }
    else{
        for(int i = 0;i<ele.second;i++) odds+= ele.first;
    }
  }
  cout<<pali+odds;
  reverse(pali.begin(),pali.end());
  cout<<(pali)<<endl;
}

int32_t main(){
        solve();
    return 0;
}