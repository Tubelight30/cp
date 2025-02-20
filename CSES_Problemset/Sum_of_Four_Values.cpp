#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,t;
  cin>>n>>t;
  if(n<=3){
    cout<<"IMPOSSIBLE";
    return;
  }
  vector<vector<int>> v(n);
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    v[i].push_back(temp);
    v[i].push_back(i);
  }
  sort(v.begin(),v.end());

  for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;j++){
        int val = t-v[i][0]-v[j][0];
        for(int k = j+1,l = n-1;k<l;k++){
            while(k<l && v[k][0]+v[l][0]>val){
                l--;
            }
            if(k<l && v[k][0]+v[l][0]==val){
                cout<<v[i][1]+1<<" "<<v[j][1]+1<<" "<<v[k][1]+1<<" "<<v[l][1]+1;
                return;
            }
        }
    }
  }
  cout<<"IMPOSSIBLE";

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}