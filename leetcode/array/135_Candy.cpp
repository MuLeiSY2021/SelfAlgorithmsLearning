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
    int candy(vector<int>& ratings) {
        int all_cost=ratings.size();
        vector<int> score(ratings.size());
        for(int i = 0;i < ratings.size();i++) {
            int p_c=INT_MIN,p_s=0,n_c=INT_MIN,n_s=0;
            if(i != 0){
                p_c=ratings[i-1];
                p_s=score[i-1];
            }
            if(i+1 < ratings.size()) {
                n_c = ratings[i+1];
                n_s = score[i+1];
            }
            int n_score =score[i]+1;
            if(n_c > ratings[i] && n_score > n_s) {
                score[i+1]=n_score;
                all_cost +=n_score;
            }

            if(p_c > ratings[i] && n_score > p_s) {
                for(int j = i-1;j > -1;j--) {
                    if (score[j+1]+1>score[j] && ratings[j] != ratings[j+1]) {
                        all_cost += score[j+1]+1 - score[j];
                        score[j]=score[j+1]+1;
                    }
                    if(j > 0 && score[j] != score[j-1]) {
                        break;
                    }
                }
            }
        }
        return all_cost;
    }
};