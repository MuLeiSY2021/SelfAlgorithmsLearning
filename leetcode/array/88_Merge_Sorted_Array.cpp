#include <iostream>
#include <vector>
//
// Created by MuLei_SY on 24-7-16.
//
using std::vector;
using std::cout;
using std::min;
using std::max;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1;
        int p2 = n-1;
        int p = m + n -1;
        while (p1 >= 0 && p2 >= 0) {
            if(nums1[p1] > nums2[p2]) {
                nums1[p]=nums1[p1];
                p1--;
            } else {
                nums1[p]=nums2[p2];
                p2--;
            }
            p--;
        }

        while (p2 >= 0) {
            nums1[p]=nums2[p2];
            p2--;
            p--;
        }
    }
};

// int main() {
//     Solution s;
//     vector<int> v1 = {0};
//     vector<int> v2 = {1};
//     s.merge(v1, 0, v2, 1);
//     //55
// }