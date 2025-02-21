#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  vector<int> ans(n);
  stack<int> st;
  for(int i  =0;i<n;i++){
    int num;
    cin>>v[i];

    while(!st.empty() && v[st.top()]>=v[i]){
        st.pop();
    }
    if(st.empty()){
        cout<<0<<" ";
        st.push(i);
        continue;
    }
    cout<<st.top()+1<<" ";
    st.push(i);
    // auto it = st.lower_bound({num});
    // if(it == st.begin()){
    //     ans[i] = 0;
    //     cout<<ans[i]<<" ";
    //     st.insert({num,i});
    //     continue;
    // }
    // int maxi= -1;
    // for(auto itr = st.begin();itr!=it;itr++){
    //     maxi = max(maxi,(*itr)[1]);
    // }
    // ans[i] = maxi+1;
    // cout<<ans[i]<<" ";
    // st.insert({num,i});

  }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}