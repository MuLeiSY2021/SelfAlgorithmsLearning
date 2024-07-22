//
// Created by MuLei_SY on 24-7-22.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public int romanToInt(string s) {
        char[] chars = s.toCharArray();
        int res = 0;
        for (int i = 0; i < chars.length; i++) {
            boolean flag;
            switch (chars[i]) {
                case 'I':
                    flag = i + 1 < chars.length && (chars[i + 1] == 'V' || chars[i + 1] == 'X');
                res += flag ? chars[i + 1] == 'V' ? 4 : 9 : 1;
                if(flag) {
                    i++;
                }
                break;

                case 'V':
                    res += 5;
                break;

                case 'X':
                    flag = i + 1 < chars.length && (chars[i + 1] == 'L' || chars[i + 1] == 'C');
                res += flag ? chars[i + 1] == 'L' ? 40 : 90 : 10;
                if(flag) {
                    i++;
                }
                break;

                case 'L':
                    res += 50;
                break;

                case 'C':
                    flag = i + 1 < chars.length && (chars[i + 1] == 'D' || chars[i + 1] == 'M');
                res += flag ? chars[i + 1] == 'D' ? 400 : 900 : 100;
                if(flag) {
                    i++;
                }
                break;

                case 'D':
                    res += 500;
                break;

                case 'M':
                    res += 1000;
                break;
            }
        }
        return res;
    }
}