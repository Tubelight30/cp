#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  vector<int> v = {1,2,3,4,5};
  vector<vector<int>> temp(5,vector<int>(5));
  for(int i = 0;i<5;i++){
    for(int j = 0;j<5;j++){
        cin>>temp[i][j];
    }
  }
  int ans = 0;
  int tempans = 0;
  do{
    //12345
    tempans+= temp[v[0]-1][v[1]-1]+temp[v[1]-1][v[0]-1]+temp[v[2]-1][v[3]-1]+temp[v[3]-1][v[2]-1];

    //2345
    tempans+= temp[v[1]-1][v[2]-1]+temp[v[2]-1][v[1]-1]+temp[v[3]-1][v[4]-1]+temp[v[4]-1][v[3]-1];
    

    //345
    tempans+= temp[v[2]-1][v[3]-1]+temp[v[3]-1][v[2]-1];

    //45
    tempans += temp[v[3]-1][v[4]-1]+temp[v[4]-1][v[3]-1];

    ans = max(tempans,ans);
    tempans = 0;
  }while(next_permutation(v.begin(),v.end()));

  cout<<ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}