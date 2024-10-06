#include <bits/stdc++.h>
using namespace std;
void permutations(vector<vector<int>>& res, vector<int> arr, int idx) {
  
    // Base case: if idx reaches the size of the array, 
     // add the permutation to the result
    if (idx == arr.size()) {
        res.push_back(arr);
        return;
    }

    // Permutations made by swapping each element
    // starting from index `idx`
    for (int i = idx; i < arr.size(); i++) {
      
        // Swapping
        swap(arr[idx], arr[i]);

        // Recursive call to create permutations 
        // for the next element
        permutations(res, arr, idx + 1);

        // Backtracking
        swap(arr[idx], arr[i]);
    }
}

vector<vector<int>> permute(vector<int>& arr) {
  
    // Declaring result variable
    vector<vector<int>> res;

    // Calling permutations with idx starting at 0
    permutations(res, arr, 0);
    return res;
}

void solve(){
    int n;
    cin>>n;
    vector<int> v1(2*n);
    unordered_map<int,int> mp;
    for(int i = 0;i<2*n;i++){
        cin>>v1[i];
        mp[v1[i]]++;
    }
    vector<int> permu;
    for(int i = 1;i<=2*n;i++){
        if(mp.find(i) == mp.end()){
            permu.push_back(i);
        }
    }


    vector<vector<int>> ans = permute(permu);
    vector<int> s1;
    for (auto x : ans) {
            int k = 0;
        int modsum = 0;
        // for (auto y : x) {
            for(int i = 0;i<2*n;i++){
                // if(v1[i] == 0){
                //     v1[i] = x[k];
                //     k++;
                // }
                if(i%2 != 0){
                    int num1 = v1[i-1];
                    if(v1[i-1] == 0){
                        num1 = x[k];
                        modsum+=abs(num1-x[k+1]);
                        k+=2;
                    }else{
                        modsum+=abs(num1-x[k]);
                        k++;
                    }
                    
                }
            }
        s1.push_back(modsum);
    }
    sort(s1.begin(),s1.end());
    int count = 0;
    for(int i = 0;i<s1.size();i++){
        if(s1[i] == s1[s1.size()-1]){
            count++;
        }
    }
    cout<<count<<endl;
}




// Driver Code
int main() {
    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
