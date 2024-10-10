#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;
    cin>>n;
    multiset<int> s;
    string s1 = "";
    string s2 = "";
    int sum = 0;
    for(int i = 0;i<n;i++){
        int temp;
        cin>>temp;
        sum+=temp;
        if(temp == 0){
            s2 += '0';
        }else{
            s1+='5';
        }
    }
    string num = s1+s2;
    int ans = -1;
    for(int i = 0;i<num.length();i++){
        if(num[i] == '0'){
            ans = 0;
            break;
        }
        else{
            if(sum%9 == 0 && num[num.length()-1] == '0'){
                cout<<num.substr(i)<<endl;
                return;
            }
            sum-=5;
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
        solve();
    return 0;
}