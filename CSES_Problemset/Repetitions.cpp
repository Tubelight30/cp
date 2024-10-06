#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string s;
  cin>>s;
  char last = s[0];
  int count = 1;
  int maxcount = INT_MIN;
  for(int i = 1;i<s.length();i++){
    if(s[i] == last){
      count++;
      maxcount = max(maxcount,count);
    }
    else{
      last = s[i];
      count= 1;
    }
  }
  cout<<(max(1LL,maxcount))<<endl;
}

int32_t main(){
        solve();
    return 0;
}