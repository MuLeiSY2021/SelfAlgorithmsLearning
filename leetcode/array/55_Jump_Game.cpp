//
// Created by MuLei_SY on 24-7-18.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump=0;
        for (int i=0;i< nums.size();i++) {
            if(i > max_jump) {
                return false;
            }
            max_jump = max(max_jump,i+nums[i]);
        }
        return true;
    }
};

// int main() {
//     Solution s;
//     vector<int> v1 = {2,3,1,1,4};
//     s.canJump(v1);
//     //55
// }