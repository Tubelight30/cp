#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string s;
  cin>>s;
  map<char,int> mp;
  for(int i = 0;i<s.length();i++){
    mp[s[i]]++;
  }
  int count = 0;
  for(auto ele:mp){
    if(ele.second%2 == 1){
        count++;
    }
  }

  if((count)<=1){
    cout<<"First";
    return;
  }
  if((count)%2 == 0){
    cout<<"Second";
    return;
  }
  else{
    cout<<"First"<<endl;
    return;
  }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}