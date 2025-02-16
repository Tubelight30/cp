#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  unordered_map<int,int> mp;
  for(int i  = 0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
    }
    if(n == 1){
        cout<<1<<" "<<1<<endl;
        return;
    }
  int score = v.size()-mp.size();
  int l = 0;
  int r = 0;
  bool found = false;
  for(int  i  = 0;i<n;i++){
    if(mp[v[i]] == 1){
        l  = i;
        r = i;
        found = true;
        break;
    }
  }
  if(found == false){
    cout<<0<<endl;
    return;
  }
  int maxscore = 0;
  int bestl = 0;
  int bestr = 0;
  while(r<v.size()){
    if(mp[v[r]] == 1){
        r++;
        int len = r-l;
        if(r == l){
            len  = 1;
        }
        if((v.size()-len) - (mp.size()-len)>=maxscore && r-l > bestr-bestl){
            maxscore = (v.size()-len) - (mp.size()-len);
            bestl = l;
            bestr = r-1;
            if(l == r){
                bestr = r;
            }
        }
    }
    else{
        r++;
        l = r;
    }
        
  }
  cout<<bestl+1<<" "<<bestr+1<<endl;
  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}