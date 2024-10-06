#include <bits/stdc++.h>
using namespace std;

//if n is odd number, then 9 and (n-9) is an answer (n-9 is an even number at least 4, so a composite number), 
//and if n is even number, then 8 and (n-8) is an answer (n-8 is an even number at least 4, also must be a composite number).
void solve(){
  int n;
  cin>>n;
  if(n%2 == 0){
    cout<<8<<" "<<n-8<<endl;//cannot choose 6 as 12-6=6 (repeating number)
  }else{
    cout<<9<<" "<<n-9<<endl;
  }
  // cout<<num1<<" "<<n-num1<<endl;
}

int main(){
        solve();
    return 0;
}