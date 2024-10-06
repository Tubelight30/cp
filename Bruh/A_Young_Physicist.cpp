#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n*3];
    int temp;
    for(int i = 0;i<n*3;i++){
        cin>>temp;
        arr[i] = temp;
    }
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;
    for(int i = 0;i<n*3;i = i+3){
        sumx+=arr[i];
    }
    for(int i = 1;i<n*3;i = i+3){
        sumy+=arr[i];
    }
    for(int i = 2;i<n*3;i = i+3){
        sumz+=arr[i];
    }
    if(sumx == 0 && sumy ==0 && sumz ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    // int t = 0;
    // cin>>t;
    // while(t--){
        solve();
    // }

    return 0;
}