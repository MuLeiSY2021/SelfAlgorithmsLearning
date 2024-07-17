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
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX,maxprofit =0;
        for(int num:prices) {
            if(num < min) {
                min = num;
            } else if(num - min > maxprofit) {
                maxprofit = num - min;
            }
        }
        return maxprofit;
    }
};