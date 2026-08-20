#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = 0;
        int min_idx = 0;

        for(int i = 1; i < n; i++) {
            if(prices[i] < prices[min_idx]) min_idx = i;
            else {
                if(prices[i] - prices[min_idx] > max) max = prices[i] - prices[min_idx];
            }
        }
        return max;
    }
};
