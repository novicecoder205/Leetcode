class Solution {
public:
    int romanToInt(string s) {
        // Map of Roman numerals to their integer values
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total = 0;
        int prevValue = 0;

        for (char c : s) {
            int currentValue = romanMap[c];

            // If the current value is greater than the previous value,
            // it means we need to subtract twice the previous value
            // (because we added it in the previous iteration)
            if (currentValue > prevValue) {
                total += currentValue - 2 * prevValue;
            } else {
                total += currentValue;
            }

            prevValue = currentValue;
        }

        return total;
    }
};