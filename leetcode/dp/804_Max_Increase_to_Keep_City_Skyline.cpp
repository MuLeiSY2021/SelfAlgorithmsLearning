#include <cstring>
#include <vector>

//
// Created by MuLei_SY on 24-7-14.
//
using std::vector;
using std::max;
using std::min;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int max_num[2][n];
        memset(max_num, 0, 2*n * sizeof(int));
        for (int i = 0; i < n;i++) {
            for (int j = 0; j < n; j++) {
                max_num[0][j]= max(max_num[0][j],grid[i][j]);
                max_num[1][i]= max(max_num[1][i],grid[i][j]);
            }
        }
        int result = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result += min(max_num[0][j],max_num[1][i])-grid[i][j];
            }
        }
        return result;
    }
};