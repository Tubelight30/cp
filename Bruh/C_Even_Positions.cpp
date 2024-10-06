#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<char> st;
//   for(int i = 0;i<s.length();i++){
//     s[0] = '(';
//   }
    // int l = 2;
    // // int r = l+1;
    // s[0] = '(';
    int cost = 0;
    // while(l<s.length()){
    //     if(s[l-1] == '('){
    //         s[l] = ')';
    //         if(s[l-1] == '('){
    //             cost = cost +1;
    //         }else{
    //             cost = cost+3;
    //         }
    //         l+=2;
    //     }else{
    //         s[l] = '(';
    //         if(s[l+1] = ')'){
    //             cost = cost + 1;
    //         }
    //         l+=2;
    //     }
    // }
    // int j = 0;
    // while(j<s.length()){
    //     for(int i =1;i<s.length();i++){
    //         if(s[i+1] == ')'){
    //             cost++;
    //         }
    //     }
    // }
    // cout<<cost+1<<endl;
    // cout<<s<<endl;
    int j = 0;
    for(int i =0;i<s.length();i++){
        if(s[i]!=')'){
            j = i;
            st.push_back(s[i]);
        }else{
            break;
        }
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