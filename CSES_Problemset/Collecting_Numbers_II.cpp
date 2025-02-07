#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,m;
  cin>>n>>m;
  // map<int,int> mp;
  vector<int> v(n+1);
  vector<int> pos(n+1);
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    v[i+1] = temp;
    pos[temp] = i+1;
    // mp[temp] = i;
  }
  //!count the invsersion of consective numbers.
  int rounds = 1;
  for(int i = 1;i<n;i++){
    if(pos[i]>pos[i+1]){
        rounds++;
    }
  }
  set<pair<int,int>> st;
  for(int i = 0;i<m;i++){
    int a,b;
    cin>>a>>b;
    if(v[a] +1 <=n){
      st.insert({v[a],v[a]+1});
    }
    if(v[a]-1 >=1){
      st.insert({v[a]-1,v[a]});
    }
    if(v[b] +1 <=n){
      st.insert({v[b],v[b]+1});
    }
    if(v[b]-1 >=1){
      st.insert({v[b]-1,v[b]});
    }
    //subtract inversion formed by current elements at a and b
    for(auto p : st){
      if(pos[p.first]>pos[p.second]){
        rounds--;
      }
    }
    swap(v[a],v[b]);
    pos[v[a]] = a;
    pos[v[b]] = b;
    // after swapping add the inversions caused due to swap
    for(auto p : st){
      if(pos[p.first]>pos[p.second]){
        rounds++;
      }
    }
    st.clear();
    cout<<rounds<<endl;
  }
}

int32_t main(){
        solve();
    return 0;
}