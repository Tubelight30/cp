#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decToBin(int n) {
        string ans = "";
        for (int i = 31; i >= 0; i--) {
            int k = n >> i;
            if (k & 1)
                ans += "1";
            else
                ans += "0";
        }
        // Remove leading zeros
        ans.erase(0, ans.find_first_not_of('0'));
        if (ans.empty()) ans = "0"; // Handle the case where n is 0
        return ans;
    }

    int conv(const string& bin) {
        int dec = 0;
        for (char c : bin) {
            dec = dec * 2 + (c - '0');
        }
        return dec;
    }

    int maxGoodNumber(vector<int>& nums) {
        vector<string> v(3);
        for (int i = 0; i < 3; i++) {
            v[i] = decToBin(nums[i]);
        }
        int res = 0;
        do {
            string temp = "";
            for (int i = 0; i < 3; i++) {
                temp += v[i];
            }
            int converted = conv(temp);
            res = max(res, converted);
        } while (next_permutation(v.begin(), v.end()));
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 38, 1};
    cout << sol.maxGoodNumber(nums) << endl; // Example usage
    return 0;
}