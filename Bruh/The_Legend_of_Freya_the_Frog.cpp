#include <bits/stdc++.h>
using namespace std;

void solve(){
  int x,y,k;
  cin>>x>>y>>k;
  int curr_x = 0,curr_y = 0;
  bool move_x = true;
  int jumps = 0;
  while ((curr_x != x || curr_y != y)){
    if(move_x){
        int dist = min(k,abs(x-curr_x));
        if(x>curr_x){
            curr_x+=dist;
        }else{
            curr_x-=dist;
        }
    }else{
        int dist = min(k,abs(y-curr_y));
        if(y>curr_y){
            curr_y+=dist;
        }else{
            curr_y-=dist;
        }
    }
    move_x = !move_x;
    jumps++;
  }
  cout<<jumps<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}