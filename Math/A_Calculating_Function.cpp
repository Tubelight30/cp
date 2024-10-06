#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  if(n%2 ==0){
    cout<<n/2<<endl;
    return;
  }else{
    cout<<(n/2) - n<<endl;
    return;
  }
}

int main(){
    solve();

    return 0;
}