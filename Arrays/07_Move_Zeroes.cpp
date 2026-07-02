/*
------------------------------------------------------------
Problem       : Move Zeroes
Platform      : Take U Forward
Topic         : Arrays
Difficulty    : Easy
Date Solved   : 02-07-2026

Approach:
- Maintain pointer 'j' for the position of the next non-zero element.
- Traverse the array once.
- Whenever a non-zero element is found, swap it with nums[j].
- Increment j after placing a non-zero element.

Time Complexity : O(n)
Space Complexity: O(1)

What I Learned:
- Two Pointer Technique
- In-place array modification
- Stable movement of non-zero elements

Mistakes I Made:
- Initially thought an extra array was required.
- Forgot that swapping with itself is completely valid.
- Realized the array can be modified in a single traversal.

Revision Count : 1
------------------------------------------------------------
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
