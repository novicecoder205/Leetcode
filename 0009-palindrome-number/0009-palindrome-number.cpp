#include <iostream>
using namespace std;

class Solution {
public:
    // Function
    bool isPalindrome(int x) {
        // Negative numbers and numbers that end with 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int reversedNumber = 0;
        while (x > reversedNumber) {
            reversedNumber = reversedNumber * 10 + x % 10;
            x /= 10;
        }
        
        // Check if the number is equal to its reverse or the reverse without the last digit
        return x == reversedNumber || x == reversedNumber / 10;
    }
};

