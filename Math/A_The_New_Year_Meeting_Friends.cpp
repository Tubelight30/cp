#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    cin>>x>>y>>z;
    int sum = (x+y+z);
    int maxi = max(x,max(y,z));
    int mini = min(x,min(y,z));
    int rem = sum-maxi-mini;
    cout<<maxi-mini;
}

int main(){
    solve();

    return 0;
}