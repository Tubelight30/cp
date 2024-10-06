#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  unordered_set<int> st;
  st.insert({a,b,c,d});
//   cout<<st.size()<<endl;
//   for(auto ele:st){
//     cout<<ele<<" ";
//   }
  cout<<4-st.size()<<endl;

}

int32_t main(){
        solve();
    return 0;
}