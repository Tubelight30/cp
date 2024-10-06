#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> v1;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    v1.push_back(temp);
  }
  auto itr= v1.begin();
  for(int i = 0;i<k;i++){
    int a = v1[0];
    int b = v1[v1.size()-1];
    v1.erase(itr);
    v1.erase(itr+v1.size()-1);
    v1.push_back(a+b);
  }
  for(auto ele: v1){
    cout<<ele<<" ";
  }
  cout<<endl;
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}