#include <iostream>
#include <string.h>
#include <string>
//
// Created by MuLei_SY on 24-7-14.
//
/*
*f(a-z) = font(c)
? = any(c)
* = anythings(s):int
*f = anythings_until_f(s):int
*? = anythings(s):int

a*a = font anythings_until_f
* */
using std::string;

class Solution {
public:
    bool isMatch(string s, string p) {
        bool dp[s.length()+1][p.length()+1];

        memset(dp, 0, (s.length()+1)*(p.length()+1)*sizeof(bool));
        dp[0][0] = true;
        for (int j = 1; p[j-1]=='*'; ++j) {
            dp[0][j] = true;
        }
        for (int i = 1; i < s.length()+1; i++) {
            for (int j = 1; j < p.length()+1;j++) {
                if(p[j-1]=='?'|| p[j-1]==s[i-1]) {
                    dp[i][j] = dp[i-1][j-1];
                } else if(p[j-1]=='*') {
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                } else {
                    dp[i][j] = false;
                }
            }
        }
        return dp[s.length()][p.length()];
    }
};


