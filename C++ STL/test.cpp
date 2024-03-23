#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        unordered_set<int> marked;
        vector<int> answer;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        for (int i = 0; i < n; ++i) {
            heap.push({nums[i], i});
        }

        int total_sum = accumulate(nums.begin(), nums.end(), 0);

        for (const auto& query : queries) {
            int index = query[0];
            int k = query[1];

            if (!marked.count(index)) {
                marked.insert(index);
                total_sum -= nums[index];
            }

            while (k > 0 && !heap.empty()) {
                auto [value, idx] = heap.top();
                heap.pop();
                if (!marked.count(idx)) {
                    marked.insert(idx);
                    total_sum -= value;
                    k--;
                }
            }

            answer.push_back(total_sum);
        }

        return answer;
    }
};

int main() {
    vector<int> nums1 = {1, 2, 2, 1, 2, 3, 1};
    vector<vector<int>> queries1 = {{1, 2}, {3, 3}, {4, 2}};
    
    vector<int> nums2 = {1, 4, 2, 3};
    vector<vector<int>> queries2 = {{0, 1}};
    
    Solution solution;
    vector<int> output1 = solution.unmarkedSumArray(nums1, queries1);
    vector<int> output2 = solution.unmarkedSumArray(nums2, queries2);
    
    cout << "Output 1: ";
    for (int num : output1) {
        cout << num << " ";
    }
    cout << endl; // Output: 8 3 0
    
    cout << "Output 2: ";
    for (int num : output2) {
        cout << num << " ";
    }
    cout << endl; // Output: 7
    
    return 0;
}
