class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> hashSet;
        for(int i = 0; i<=nums.size(); i++)
        {
            hashSet.insert(i);
        }
        for(int i = 0; i<nums.size(); i++)
        {
            hashSet.erase(nums[i]);
        }
        return *hashSet.begin();
    }
};