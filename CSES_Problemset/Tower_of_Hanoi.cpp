#include <bits/stdc++.h>
using namespace std;
#define int long long int

int moves = 0;
vector<pair<int,int>> v;
void tower(int n,int start,int mid,int desti){
    if(n == 0) return;
    tower(n-1,start,desti,mid);
    // pair p(start,desti);
    v.push_back(pair<int,int>(start,desti));
    moves++;
    tower(n-1,mid,start,desti); 
}

void solve(){
  int n;
  cin>>n;
  tower(n,1,2,3);
  cout<<moves<<endl;
  for(auto ele: v){
    cout<<ele.first<<" "<<ele.second<<endl;
  }
}

int32_t main(){
    solve();
    return 0;
}

