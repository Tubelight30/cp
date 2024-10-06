#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  if(n == 1){
    cout<<0<<endl;
    return;
  }
  int amazing = 0;
  int maxi = INT_MIN;
  int mini = INT_MAX;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    if(i == 0){
        maxi = temp;
        mini = temp;
    }
    else{
        if(temp>maxi){
            amazing++;
            maxi = temp;
        }
        else if(temp<mini){
            amazing++;
            mini = temp;
        }
    }
  }
  cout<<amazing<<endl;
}

int32_t main(){
        solve();
    return 0;
}