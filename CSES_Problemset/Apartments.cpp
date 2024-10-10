#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n,m,k;
  cin>>n>>m>>k;
  vector<int> desired(n);
  vector<int> appm(m);
  for(int i =0;i<n;i++){
    cin>>desired[i];
  }
  for(int i = 0;i<m;i++){
    cin>>appm[i];
  }
  sort(desired.begin(),desired.end());
  sort(appm.begin(),appm.end());
  int l = 0;
  int r = 0;
  int count= 0;
  while(l<n && r<m){
    if(desired[l]-k <= appm[r] && desired[l]+k >= appm[r]){
        count++;
        l++;
        r++;
    }else{
        if(desired[l]>appm[r]){
            r++;
        }else{
            l++;
        }
    }
  }
  cout<<count<<endl;
}

int32_t main(){
        solve();
    return 0;
}