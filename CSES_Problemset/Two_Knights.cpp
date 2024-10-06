#include <bits/stdc++.h>
using namespace std;
#define int long long int


//https://www.geeksforgeeks.org/cses-solutions-two-knights/
//basically find all ways to place 2 knights then subtract attacking ones
//2 knight attack each in 2x3 and 3x2 board. now simply find how many 2x3 and 3x2 boards in chessboard of i*i
void solve(){
  int n;
  cin>>n;

  for(int i = 1;i<=n;i++){
    int k2 = i*i;
    int ways = ((k2)*(k2-1))/2;
    if(i>2){
        ways -= (2*(i-1)*(i-2)) + (2*(i-2)*(i-1));//no. of 2x3 and 3x2 chess boards in a chessboard of i*i
    }
    cout<<ways<<endl;
  }
}

int32_t main(){
        solve();
    return 0;
}