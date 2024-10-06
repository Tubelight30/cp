#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  vector<int> s1;
  for(int i = 0;i<n;i++){
    int temp;
    cin>>temp;
    s1.push_back(temp);
  }
  sort(s1.begin(),s1.end());
  int mini = INT_MAX;
  int diff = s1[n-2] - s1[0];
  mini = min(mini,diff);
  if(s1.size()>2){
    diff = s1[n-3] - s1[0];
    mini = min(mini,diff);
  }
  diff = s1[n-1] - s1[1];
  mini = min(mini,diff);
  if(s1.size()>2){
    diff = s1[n-1] - s1[2];
    mini = min(mini,diff);
  }
  diff = s1[n-2] - s1[1];
  mini = min(mini,diff);
  cout<<mini<<endl;
  
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}