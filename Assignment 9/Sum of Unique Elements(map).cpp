
//https://leetcode.com/problems/sum-of-unique-elements/submissions/876874680/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        int sum=0;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        for(auto x:mp) if(x.second==1) sum+=x.first;
        return sum;
    }
};
