#include <bits/stdc++.h>
using namespace std;

void solve(){
   long long int  n,k;
  cin>>n>>k;
   long long int  leaves  = 0;
   long long int fall = 1;
//   for(long long  i = 2;i<=n;i++){
//     leaves += pow(i,i);
//     if((i)>= fall + k){
//         leaves -= pow(fall,fall);
//         fall++;
//     }
//   }
    long long int num = (n-(n-k+1))/2;

    if((n-k+1) % 2 != 0 || n%2 != 0){
        num+=1;
    } 
    // long long int pls_bhai=ceil(oddcount);
    // for(long long int i = n;i>n-k;i--){
    //     // leaves+= pow(i,i);
    //     if(i%2 != 0){
    //         oddcount++;
    //     }
    // }


//   cout<<leaves<<endl;
//   long long l = 1;
//   for(long long i = k;i<n;i = i+k){
//     leaves -= pow(l-1,l-1);
//     l++;
//   }
    // cout<<leaves<<endl;

    // cout<<oddcount;
  if(num %2 == 0){
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO"<<endl;

}

int main(){

    long long t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
