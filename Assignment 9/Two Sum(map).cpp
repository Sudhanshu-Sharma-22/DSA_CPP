
//https://leetcode.com/problems/two-sum/submissions/908853862/?envType=study-plan&id=data-structure-i

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end()) mp[nums[i]] = i;
            else return {mp[target - nums[i]], i};
        }
        return {-1,-1};
    }
};
