using System;
using System.Collections.Generic;

public class Solution {
    public bool IsValid(string s) {
        Stack<char> stack = new Stack<char>();  // Create a stack to hold characters
        foreach (char c in s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stack.Push(c);
            } else {
                // If stack is empty, there is no corresponding opening bracket
                if (stack.Count == 0) return false;
                char top = stack.Pop();  // Pop the top element
                // Check if the top element matches the current closing bracket
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        // Return true if the stack is empty, indicating all brackets are matched
        return stack.Count == 0;
    }
}
