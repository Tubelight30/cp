#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,m;
  cin>>n>>m;
  vector<int> sum(n);
  vector<int> permu(n);
  for(int i = 0;i<n;i++){
    permu[i] = i;
  }
  vector<vector<int>> arr;
  for(int i= 0;i<n;i++){
    vector<int> p;
    for(int j = 0;j<m;j++){
        int temp;
        cin>>temp;
        p.push_back(temp);
    }
    arr.push_back(p);
  }
  while(next_permutation(permu.begin(),permu.end())){
    
  }
  for(auto i:sum){
    cout<<i<<" ";
  }
  cout<<endl;
}

int32_t main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}