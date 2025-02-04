#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,m;
    cin>>n>>m;

    int initial = 1;
    int time = 0;
    for(int i = 0;i<m;i++){
        int present;
        cin>>present;

        if(present>=initial){
            time+= present-initial;
            initial = present;
        }
        else{
            int diff = initial-present;
            time+= (n-diff);
            initial = present;
        }
    }
    cout<<time<<endl;
}

int32_t main(){
        solve();
    return 0;
}