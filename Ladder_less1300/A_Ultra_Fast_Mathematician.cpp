#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  string num1,num2;
  cin>>num1;
  cin>>num2;
  for(int i = 0;i<num1.length();i++){
    cout<<(num1[i]!=num2[i]) ? 1:0;
  }
  cout<<endl;

}

int32_t main(){
        solve();
    return 0;
}