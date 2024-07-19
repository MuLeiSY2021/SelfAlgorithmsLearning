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
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) {
            return 0;
        }
        if(prices.size()==2) {
            return prices[1]-prices[0] > 0 ? prices[1]-prices[0] : 0;
        }

        int bottom=0,top=1,profit=0;
        while(top != prices.size()) {
            bool change = false;
            if(prices[bottom+1] < prices[bottom]) {
                bottom++;
                change = true;
            }
            if(prices[top+1] > prices[top]) {
                top++;
                change = true;
            }
            top = top > bottom ? top : bottom + 1;
            if(!change) {
                if(prices[top] - prices[bottom] > 0) {
                    profit += prices[top] - prices[bottom];
                    bottom = top;
                    top = bottom + 1;
                } else {
                    top++,bottom++;
                }

            }
        }
        return profit;
    }
};

// int main() {
//     Solution s;
//     vector<int> v1 = {3,3,5,0,0,3,1,4};
//     s.maxProfit(v1);
//     //55
// }