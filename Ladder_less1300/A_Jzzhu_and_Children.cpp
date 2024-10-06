#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,m;
  cin>>n>>m;
  queue<int>  q;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    q.push(i+1);
    v[i] = temp;
  }
  int last = 0;
  while(!q.empty()){
    if(v[q.front()-1] <= m){
      if(q.size() == 1) last = q.front();
      q.pop();
    }else{
      int a = q.front();
      v[a-1]-=m;
      q.pop();
      q.push(a);
    }
  }
  cout<<last<<endl;
  
}

int32_t main(){
        solve();
    return 0;
}