//
// Created by MuLei_SY on 24-7-20.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

class RandomizedSet {
public:
    vector<int> set;
    unordered_map<int,int> map;
    RandomizedSet() {
        set = vector<int>();
        map = unordered_map<int,int>();
        srand(time(nullptr));
    }

    bool insert(int val) {
        if(map.find(val) != map.end()) {
            return false;
        }
        map.insert(make_pair(val,set.size()));
        set.push_back(val);
        return true;
    }

    bool remove(int val) {
        if(map.find(val) == map.end()) {
            return false;
        }
        set[map[val]] = set[set.size()-1];
        map[val]=map[set[set.size()-1]];
        map.erase(val);
        set.erase(set.cend());
        return true;
    }

    int getRandom() {
        return set[rand() % set.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */