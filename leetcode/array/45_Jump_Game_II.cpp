//
// Created by MuLei_SY on 24-7-19.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() == 1) {
            return 0;
        }
        if(nums[0]+1 >= nums.size()) {
            return 1;
        }
        int tmp = 0,round = 1;
        while(tmp < nums.size()-1) {
            int max_p=tmp,max=tmp;
            for (int i = tmp+1;i<=nums[tmp]+tmp&&i<nums.size();i++) {
                if(nums[i]+i > max) {
                    max_p = i;
                    max = nums[i]+i;
                }
            }
            tmp = max_p;
            round++;
            if(max >= nums.size()) {
                return round+1;
            }
        }
        return round;
    }
};

int main() {
    Solution s;
    vector<int> v1 = {3,4,3,2,5,4,3};
    s.jump(v1);
    //55
}