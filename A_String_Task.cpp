#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string s;
  cin>>s;
  string ans = "";
  set<char> st = {'A','O','Y','E','U','I','a','o','y','e','u','i'};
  for(int i = 0;i<s.length();i++){
    if(st.find(s[i]) != st.end()){
        continue;
    }else{
        ans+='.';
        if(s[i]>=65 && s[i]<=91){
            char a = 97+s[i]-65;
            ans+=a;
        }else{
            ans+=s[i];
        }
    }
  }
  cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}