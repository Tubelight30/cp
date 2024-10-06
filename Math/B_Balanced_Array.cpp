#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  if(n%4 != 0){
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
  vector<int> ans;
  int sum = 0;
  int ele = 2;
  for(int i  =0;i<n/2;i++){
    cout<<ele<<" ";
    sum+=ele;
    ele+=2;
  }
  ele = 1;
  for(int i = 0;i<n/2-1;i++){
    cout<<ele<<" ";
    sum-=ele;
    ele+=2;
  }
  cout<<sum;
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