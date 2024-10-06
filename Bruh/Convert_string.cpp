#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;

  //k lies b/w 1 and k
  map<char,int> mp;
  for(int i = 0;i<s.length();i++){
    mp[s[i]]++;
  }
  int ways = 0;
  int a = mp['0'];
  int b = mp['1'];
  if(a == b && a != 0 && b != 0){
        ways+= n/a;
        cout<<ways<<endl;
        return;
  }
  else if(a != b && a != 0 && b != 0){
    ways+=1;
    ways+=n/a;
    ways+=n/b;
    cout<<ways<<endl;
    return;
  }
  else if(a == 0){
    ways+=n/b;
    ways+=n/2;
    cout<<ways<<endl;
    return;
  }else{
    ways+=n/a;
    ways+=n/2;
    cout<<ways<<endl;
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