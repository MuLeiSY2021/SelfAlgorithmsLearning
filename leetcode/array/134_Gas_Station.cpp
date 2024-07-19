//
// Created by MuLei_SY on 24-7-21.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int min_i = 0,min_s=INT_MAX,spare=0;
        for(int i=0;i < gas.size();i++) {
            spare += gas[i] - cost[i];
            if(spare <= min_s) {
                min_s = spare;
                min_i = i;
            }
        }
        return spare < 0 ? -1 : (min_i+1)%gas.size();
    }
};