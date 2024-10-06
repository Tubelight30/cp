#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> powers(19,1);
void solve(){
  int q;
  cin>>q;
  if(q<10){
    cout<<q<<endl;
    return;
  }
  int NumPos = 0;//! will have val like 9 189 .....
  int prevNumPos = 0;
  
  //!currDig used finding range of num between (1 to 10) or (10 to 100) or ....
  int currDig = 0;
  for(int i = 1;i<19;i++){
    NumPos += ((powers[i]) - powers[i-1])* i;//! will be compared to q (just do dry run and apply basic math to get this formula)

    if(NumPos>=q){
      currDig = i;
      break;
    }
    prevNumPos = NumPos;
  }

  int low = powers[currDig-1];
  int high = powers[currDig]-1;
  int ans = 0;
  int startPosAns = 0;
  while(low<=high){
    int mid = (high+low)/2;

    int startPos = (mid - powers[currDig-1])*currDig +  prevNumPos+1;

    if(startPos<=q){
       if(startPos+currDig>=q){
        ans = mid;
        startPosAns = startPos;
       }
       low = mid+1;
    }else{
      high = mid-1;
    }
  }
  string num = to_string(ans);
  cout<<num[q-startPosAns]<<endl;
  

  
}

int32_t main(){
    
    for(int i = 1;i<19;i++){
      powers[i] = powers[i-1]*10;//! 1 10 100 1000 10000 .....
    }
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}