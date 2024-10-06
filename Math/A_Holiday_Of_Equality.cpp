#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int> num(n);
  int maxi = INT_MIN;
  int req = 0;
  for(int i = 0;i<n;i++){
    cin>>num[i];
    maxi = max(maxi,num[i]);
  }
  for(auto ele: num){
    if(ele != maxi){
        req+=maxi-ele;
    }
  }
  cout<<req<<endl;

}

int main(){
        solve();
    return 0;
}