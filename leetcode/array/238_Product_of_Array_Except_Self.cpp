//
// Created by MuLei_SY on 24-7-20.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size());
        arr[0] = 1,arr[nums.size() - 1] = 1;
        int tmp = 1;
        for (int i = 1; i < nums.size();i++) {
            tmp *= nums[i-1];
            arr[i] = tmp;
        }
        tmp = 1;
        for (int i = nums.size()-2; i < nums.size();i--) {
            tmp *= nums[i+1];
            arr[i] *= tmp;
        }
        return arr;
    }
};