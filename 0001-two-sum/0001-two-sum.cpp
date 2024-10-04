#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // To store the number and its index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // Calculate the complement needed
            
            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Return indices of the two numbers
            }
            
            // Store the number and its index in the map
            numMap[nums[i]] = i;
        }
        
        // If there is no solution, though the problem states there will be one
        return {};
    }
};
