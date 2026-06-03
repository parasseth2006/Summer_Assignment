#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (s.find(nums[i]) != s.end()) {
            
            return 1;
        }
        s.insert(nums[i]);
    }
    return 0;
    }
};