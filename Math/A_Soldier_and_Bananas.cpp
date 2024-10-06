#include <bits/stdc++.h>
using namespace std;

void solve(){
  int k,w;
  long long n;
  cin>>k>>n>>w;

  long long cost = k*((w*(w+1))/2);
  if(cost>n){
    cout<<cost-n<<endl;
    return;
  }
  cout<<"0"<<endl;

}

int main(){
    solve();
    return 0;
}