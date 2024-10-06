#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  int n;
  cin>>n;
  string arr[n];
  for(int i = 0;i<n;i++){
    cin>>s;
    arr[i] = s;
  }
  for(int i = n-1;i>=0;i--){
    int val = arr[i].find('#');
    cout<<val+1<<" ";
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