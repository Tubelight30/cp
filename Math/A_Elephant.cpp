#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin>>x;
    int steps = x/5;
    if(x%5!=0) steps++;
    cout<<steps<<endl;
}

int main(){
    solve();

    return 0;
}