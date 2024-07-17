//
// Created by MuLei_SY on 24-7-17.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result,count = 0;
        for (int n:nums) {
            if(count == 0) {
                result = n;
            }

            count += (n == result) ? 1 : -1;
        }
        return result;
    }
};

