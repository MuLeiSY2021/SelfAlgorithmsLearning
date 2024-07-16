//
// Created by MuLei_SY on 24-7-16.
//
#include <iostream>
#include <string.h>
#include <string>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::min;
using std::max;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev=nums[0],num=1;
        for (int i = 1; i < nums.size(); i++) {
            if(nums[i] != prev) {
                num = 1;
                prev = nums[i];
            } else {
                num++;
            }

            if(num > 2) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};

int main() {
    Solution s;
    vector<int> v1 = {0,0,1,1,1,1,2,3,3};
    s.removeDuplicates(v1);
    //55
}