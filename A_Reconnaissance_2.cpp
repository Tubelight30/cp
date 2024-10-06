#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }
  int mini = abs(v[0]- v[n-1]);
//   cout<<mini<<endl;
  int ele1 = 1;
  int ele2 = n;
  for(int i = 0;i<n-1;i++){
    if(abs(v[i]-v[i+1])<mini){
        ele1 = i+1;
        ele2 = i+1+1;
        mini = abs(v[i]-v[i+1]);
    }
  }
  cout<<ele1<<" "<<ele2<<endl;

}

int32_t main(){
        solve();
    return 0;
}