#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int s,n;
  cin>>s>>n;
  vector<pair<int,int>> xy(n);
  int maxi = INT_MIN;
  int sum = s;
  for(int i =0;i<n;i++) {
    int xi,yi;
    cin>>xi>>yi;
    xy[i] = {xi,yi};
  }
  sort(xy.begin(),xy.end());
  for(int i  =0;i<n;i++){
    maxi = max(xy[i].first,maxi);
    if(xy[i].first<s){
        sum+=xy[i].second;
        s = sum;
    }
  }
  if(sum>maxi){
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO";

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}