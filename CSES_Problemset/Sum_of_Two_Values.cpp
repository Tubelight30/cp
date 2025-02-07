#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,x;
  cin>>n>>x;
  set<pair<int,int>> st;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    st.insert({temp,i+1});
  }
  auto its = st.begin();
  auto ite = st.end();
  ite--;
  int i,j;
  i =0 ,j = n-1;
  while(i<j){
    if(its->first + ite->first == x){
        cout<<its->second<<" "<<ite->second<<endl;
        return;
    }
    if(its->first + ite->first < x){
        its++;
        i++;
    }
    else if( its->first + ite->first > x){
        ite--;
        j--;
    }
  }
  cout<<"IMPOSSIBLE"<<endl;
}

int32_t main(){
        solve();
    return 0;
}