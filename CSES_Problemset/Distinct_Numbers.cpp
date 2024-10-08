#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  set<int> st;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    st.insert(temp);
  }
  cout<<st.size()<<endl;
}

int32_t main(){
        solve();
    return 0;
}