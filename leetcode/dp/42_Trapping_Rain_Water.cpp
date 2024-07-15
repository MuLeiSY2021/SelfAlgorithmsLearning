//
// Created by MuLei_SY on 24-6-15.
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
    int trap(vector<int>& height) {
        int left_h=height[0],right_h=height[0],total=0;
        for (int i = 0; i < height.size()-1;i++) {
            if(height[i]>=right_h) {
                left_h=height[i];
                int tmp=0;
                for(int j = i+1; j < height.size();j++) {
                    tmp=max(tmp,height[j]);
                    if(height[j]>=left_h) {
                        break;
                    }
                }
                right_h = tmp;
            }
            int v = std::min(left_h,right_h) - height[i];
            total += v & (~(v >> 31));
        }
        return total;
    }
};
//
// int main() {
//     Solution s;
//     vector<int> t=vector{4,2,3};
//     std::cout << s.trap(t);
//     //55
// }