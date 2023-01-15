
//https://leetcode.com/problems/keep-multiplying-found-values-by-two/submissions/878603437/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int>s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        for(auto x:s) if(x==original) original*=2;
        return original;
    }
};
