#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  multiset<int> st;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    st.insert(temp);
  }
  int mid = n/2;
  auto it = next(st.begin(),mid);

  int cost = 0;
  for(auto itr: st){
    cost+= abs(((*it)-itr));
  }
  cout<<cost<<endl;

}

int32_t main(){
        solve();
    return 0;
}