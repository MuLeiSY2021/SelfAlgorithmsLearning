//
// Created by MuLei_SY on 24-6-14.
//
#include <iostream>
#include <vector>
using std::vector;
using std::max;
using std::ios;
using std::cin;

const auto _ = []() noexcept {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
        long long dp[2]{INT_MIN,INT_MIN};
        dp[nums.front() & 1]=nums.front();
        for (const auto& i : nums) {
            dp[i & 1] = max(dp[i & 1],dp[!(i & 1)]-x) + i;
        }
        return max(dp[0],dp[1])-nums.front();
    }
};

// int main() {
//     Solution s;
//     vector<int> t=vector{53,28,6,20};
//     std::cout << s.maxScore(t,52);
//     //55
// }