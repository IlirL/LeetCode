/*You are given a 0-indexed integer array nums, and an integer k.
In one operation, you will:
- Take the two smallest integers x and y in nums.
- Remove x and y from nums.
- Add min(x,y) * 2 + max(x, y) anywhere in the array.
Note that you can only apply the described operation if nums contains at least two elemtns.

Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.*/
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long, vector<long>, greater<long>> min_heap(nums.begin(),
                                                                   nums.end());
        int num_operations = 0;

        while (min_heap.top() < k) {
            long x = min_heap.top();
            min_heap.pop();
            long y = min_heap.top();
            min_heap.pop();
            min_heap.push(min(x, y) * 2 + max(x, y));

            num_operations++;
        }
        return num_operations;
    }
};