class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];

        int lIndex = 0, rIndex = nums.size() - 1;

        while(rIndex-lIndex>1)
        {
            int temp = (rIndex+lIndex)/2;
            int mid = nums[temp];
            if(mid > nums[rIndex])
            {
                lIndex = temp;
            }
            else
            {
                rIndex = temp;
            }
        }
        return min(nums[lIndex], nums[rIndex]);
    }
};