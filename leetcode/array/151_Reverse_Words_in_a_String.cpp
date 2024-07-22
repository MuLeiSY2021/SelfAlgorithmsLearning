//
// Created by MuLei_SY on 24-7-22.
//
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string reWords = "";
        string word;
        stringstream ss(s);
        while(getline(ss,word,' ')) {
            if(word == " ") {
                continue;
            }
            reWords = word + (reWords == "" ? "" : " ") + reWords;
        }
        return reWords;
    }
};

int main() {
    Solution s;
    s.reverseWords("  hello world  ");
    //55
}