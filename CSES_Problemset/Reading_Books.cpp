#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i= 0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int sumk = 0;
  int sumj = 0;
  int l = 0;
  int r = n-1;
  while(l<r){
    if(sumk+v[l]<=sumj+v[r]){
        sumk+=v[l];
        sumj +=v[l];
        v[r] = v[r]-v[l];
        l++;
    }
    else if(sumk+v[l]>sumj+v[r]){
        sumj+=v[r];
        sumk+=v[r];
        v[l] = v[l]-v[r];
        r--;
    }
  }
  if(r == n-1){
    cout<<sumj+sumk+2*v[r]<<endl;
    return;
  } else if(l == 0){
    cout<<sumj+sumk+2*v[l]<<endl;
  }
  else{
    cout<<sumj+sumk+v[l]<<endl;
  }


}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}