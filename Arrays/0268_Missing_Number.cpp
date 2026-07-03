/*
Problem: Missing Number
Platform: LeetCode
Difficulty: Easy

Approach:
- Use XOR to find the missing number.
- XOR all numbers from 1 to n.
- XOR all elements in the array.
- Equal numbers cancel each other out (a ^ a = 0).
- The remaining value is the missing number.

Time Complexity: O(n)
Space Complexity: O(1)

Learnings:
- XOR is useful for finding a missing or unique element.
- XOR with the same number cancels out.
- Avoids using extra space or calculating sums.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int xor1 = 0, xor2 = 0;

        // XOR of numbers from 1 to n
        for (int i = 0; i < nums.size(); i++) {
            xor1 ^= (i + 1);
            xor2 ^= nums[i];
        }

        // Missing number
        return xor1 ^ xor2;
    }
};
