#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  if(n == 1){
    int temp;
    cin>>temp;
    cout<<1<<endl;
    return;
  }
  map<int,int> mp;
  int mini = LONG_MAX;
  int ind = 0;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    if(temp<mini){
      mini = temp;
      ind = i+1;
    }
    mp[temp]++;
  }

  if(mp[mini]>1){
    cout<<"Still Rozdil"<<endl;
    return;
  }
  cout<<ind<<endl;

}

int32_t main(){
        solve();
    return 0;
}