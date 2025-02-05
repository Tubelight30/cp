#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;

  multiset<pair<int,int>> st;
  for(int i = 0;i<n;i++){
    int start,end;
    cin>>start>>end;

    st.insert({end,start}); 
  }

  //first movie i want to watch is that end's the earliest. this giv chance to watch more movies.
  auto itr = st.begin();
  int count = 1;
  int endtime  = itr->first;
  for(auto it: st){
    if(it.second >= endtime){
        count++;
        endtime  = it.first;
    }
  }
  cout<<count<<endl;

}

int32_t main(){
        solve();
    return 0;
}