
//https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/submissions/877866661/

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
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            s.insert(rev(nums[i]));
        }
        return s.size();
    }
};
