#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
  int n;
  cin>>n;
  vector<int> v(n);
  int maxi = INT_MIN;
  int mini = INT_MAX;   
  for(int i = 0;i<n;i++){
    cin>>v[i];
    maxi = max(maxi,v[i]);
    mini = min(mini,v[i]);
  }
  int indmin;
  int indmax = INT_MAX;
  for(int i = 0;i<n;i++){
    if(v[i] == maxi && i<indmax) indmax = i;
    else if(v[i] == mini) indmin = i;
  }
  
  if(indmin<indmax){
    int swap1 = n-1-indmin;
    int swap2 = indmax;
    cout<<swap1+swap2-1<<endl;
  }else{
    int swap1 = n-1-indmin;
    int swap2 = indmax;
    cout<<swap1+swap2<<endl;

  }
}

int32_t main(){
        solve();
    return 0;
}