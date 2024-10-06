#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int arr[n];
  int temp;
  int zeroc = 0;
  unordered_map<int,int> mp;
  for(int i= 0;i<n;i++){
    cin>>temp;
    arr[i] = temp;
    if (arr[i] == 0) {
            zeroc++;
        } else {
            mp[arr[i]]++;
        }
  }
  if(zeroc== n){
    cout<<(n*(n-1))/2<<endl;
    return;
  }
  int maxele;
  int maxfreq = 0;
  for(auto ele: mp){
    if(ele.second>maxfreq && ele.first != 0){
        maxfreq = ele.second;
        maxele = ele.first;
    }
  }

  for(int i = 0;i<n;i++){
    if(arr[i] == 0){
      arr[i] = maxele;
    }
  }
  int ans = 0;
  for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
      if(i<j && arr[i] == arr[j]){
        ans++;
      }
    }
  }
  cout<<ans<<endl;
  
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}