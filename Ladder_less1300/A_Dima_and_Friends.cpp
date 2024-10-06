#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  int sum = 0;
  for(int i =0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
  }
  int w = 0;
  //there are total n+1 people so dima will only clean the place if sum%(n+1) = 1
  // check mathematically
  for(int i = 1;i<=5;i++){
    if((sum+i)%(n+1) != 1){
      w++;
    }
  }
  cout<<w<<endl;
}

int32_t main(){
        solve();
    return 0;
}