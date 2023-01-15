
//https://leetcode.com/problems/keep-multiplying-found-values-by-two/submissions/878602399/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto x:mp) if(x.first==original) original*=2;
        return original;
    }
};
