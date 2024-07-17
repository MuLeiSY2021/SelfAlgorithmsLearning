//
// Created by MuLei_SY on 24-7-17.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == k || k == 0 || nums.size() == 0) {
            return;
        }
        for (int i = 0; i < gcd(nums.size(),k);i++) {
            int p = i,tmp = nums[i];
            do {
                int ptr = (p+k)%nums.size();
                int _ = nums[ptr];
                nums[ptr] = tmp;
                tmp = _;
                p = ptr;
            } while (p != i);
        }
    }
};

int main() {
    Solution s;
    vector<int> v1 = {1,2};
    s.rotate(v1, 1);
    //55
}