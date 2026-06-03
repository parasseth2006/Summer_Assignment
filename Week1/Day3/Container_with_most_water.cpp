#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int  n = height.size();
        int lp = 0;
        int rp = n-1;
        while(lp<rp){
            int w = rp - lp;
            int ht = min(height[lp],height[rp]);
            int area = w*ht;
            max_water = max( max_water,area);
            if(height[lp]<height[rp]){
                lp++;
            }
            else rp--;
        }
        return max_water;
    }
};