#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  map<int,int> mp;
  int zeroes = 0;
  for(int i = 0;i<n;i++){
    cin>>v[i];
    zeroes++;
    mp[v[i]]++;
  }

  vector<int> temp;
  int odd = 0;
  int p = 0;
  for(auto i:mp){
    if(i.first != 0){
        odd+=(i.second%2);
        p+=(i.second/2);
    }else{
        p+=i.second;
    }
  }
//   int count = 0;
//   for(int i  =0;i<temp.size();i++){
//     if(temp[i] != 0) count += 1;
//   }
//   for(int i  =0;i<temp.size();i++){
//     if(temp[i] == 0) count += 1;
//     break;
//   }
  cout<<odd+(p>0?1:0)<<endl;
  //   if(count == 0){
//     cout<<v.size()<<endl;
//     return;
//   }
//   count+=zeroes;
//   if(count == v.size()){
//     cout<<1<<endl;
//     return;
//   }
//   if(count%2 == 0){
    // cout<<1+counts<<endl;
//   }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}