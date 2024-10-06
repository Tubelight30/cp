#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int solve(int N, int M, vector<string> &strings)
{
    vector<vector<int>> v1(N, vector<int>(3, 0));

    for (auto s : strings)
    {
        for (int i = 0; i < N; ++i)
        {
            if (s[i] == '0')
                v1[i][0]++;
            else if (s[i] == '1')
                v1[i][1]++;
            else
                v1[i][2]++;
        }
    }

    int total_distance = 0;
    for (auto count : v1)
    {
        int zeros = count[0], ones = count[1], questions = count[2];
        int total = zeros + ones + questions;
        int half = total / 2;
        int optimal_zeros = min(max(half - zeros, 0), questions);
        int optimal_ones = questions - optimal_zeros;

        int final_zeros = zeros + optimal_zeros;
        int final_ones = ones + optimal_ones;
        total_distance += final_zeros * final_ones;
    }

    return total_distance;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        int N, M;
        cin >> N >> M;

        vector<string> strings(M);
        for (int i = 0; i < M; ++i)
        {
            cin >> strings[i];
        }

        cout << solve(N, M, strings) << endl;
    }

    return 0;
}
