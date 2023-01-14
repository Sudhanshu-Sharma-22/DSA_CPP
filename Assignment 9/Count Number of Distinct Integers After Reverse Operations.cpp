
//https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/submissions/877864026/

class Solution {
public:
    int rev(int n){
	int ans=0;
	while(n>0){
		ans=ans*10 + (n%10);
		n=n/10;
	}
	return ans;
}
    int countDistinctIntegers(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            mp[rev(nums[i])]++;
        }
        return mp.size();
    }
};
