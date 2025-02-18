#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<vector<int>> v(n);
  vector<int> ans(n);
  for(int i = 0;i<n;i++){
    int a,b;
    cin>>a>>b;
    v[i] = {a,b,i};
  }
  sort(v.begin(),v.end());
  
  set<vector<int>> st;
  for(int i = 0;i<n;i++){
    auto it = st.lower_bound({v[i][0]});
    if(it != st.begin()){
        auto pre = prev(it);
        ans[v[i][2]] = (*pre)[1];
        st.erase(pre);
        st.insert({v[i][1],ans[v[i][2]]});
    }
    else{
        ans[v[i][2]] = st.size();
        st.insert({v[i][1], ans[v[i][2]]});
        }
  }
  cout<<st.size()<<endl;
  for(auto i: ans){
    cout<<i+1<<" ";
  }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}