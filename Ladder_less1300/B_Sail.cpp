#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int t,sx,sy,ex,ey;
  cin>>t>>sx>>sy>>ex>>ey;
  string s;
  cin>>s;
  int disx = (sx-ex);
  int disy = (sy-ey);
  for(int i  =0;i<s.length();i++){
    int inix = abs(sx-ex);
    int iniy = abs(sy-ey);
    if(s[i] == 'N'){
        int temp = sy+1;
        if(abs(temp-ey)<iniy) sy+=1;
    }
    else if(s[i] == 'S'){
        int temp = sy-1;
        if(abs(temp-ey)<iniy) sy-=1;
    } 
    else if(s[i] == 'W'){
        int temp = sx-1;
        if(abs(temp-ex)<inix) sx-=1;
    }
    else{
        int temp = sx+1;
        if(abs(temp-ex)<inix) sx+=1;
    }
    if(abs(sx-ex) == 0 && abs(sy-ey) == 0){
        cout<<i+1;
        return;
    }
  }
    cout<<-1;
    return;
  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}