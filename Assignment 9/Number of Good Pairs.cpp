
//https://leetcode.com/problems/number-of-good-pairs/submissions/870528924/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                else if(i<j){
                    if(nums[i]==nums[j]) count++;
                }
            }
        }
        return count;
    }
};
