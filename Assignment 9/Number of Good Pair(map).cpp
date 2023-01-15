
//https://leetcode.com/problems/number-of-good-pairs/submissions/878587568/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]]++;
            if (mp[nums[i]]>1) count+=mp[nums[i]]-1;
        }
        return count;
    }
};
