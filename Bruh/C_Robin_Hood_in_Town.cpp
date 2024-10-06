#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    long double currsum = 0;
    // long long maxi = long long_MIN;
    // float secondlargest = long long_MIN;
    for(long long i = 0;i<n;i++){
        cin>>v[i];
        currsum+=v[i];
        // maxi = max(v[i],maxi);
    }
    if(v.size() <=2){
        cout<<-1<<endl;
        return;
    }

    sort(v.begin(),v.end());
    long double req_avg = v[(n/2)];
    double curravg = (double)(currsum / (double)n);
    
    if(req_avg<curravg/2.0){
        cout<<0<<endl;
        return;
    }

    long double req_sum = (req_avg*2*n)+1;

    cout<<(long long)(req_sum-currsum)<<endl;

    
}

int main(){
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}