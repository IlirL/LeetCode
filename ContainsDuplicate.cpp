class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;

        for (int n : nums){
            numSet.insert(n);
        }
        return !(numSet.size()==nums.size());
    }
};