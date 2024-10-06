#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(a%b == 0){
        cout<<"0"<<endl;
        return;
    }
    if(a<b){
        cout<<b-a<<endl;
        return;
    }
    else{
        int quo = (a/b) + 1;
        cout<<(b*quo)-a<<endl;
        return;
    }

}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}