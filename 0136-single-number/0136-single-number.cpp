class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0; // Initialize result
        for (int num : nums) {
            result ^= num; // XOR each number with result
        }
        return result; // The remaining number is the single one
    }
};
