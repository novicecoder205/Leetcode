public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        // Loop through the array
        for (int i = 0; i < nums.Length - 1; i++) {
            for (int j = i + 1; j < nums.Length; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[] { i, j };
                }
            }
        }
        
        // Return an empty array if no solution found (the problem guarantees a solution)
        return Array.Empty<int>(); // Use Array.Empty for better performance (returns an empty array)
    }
}
