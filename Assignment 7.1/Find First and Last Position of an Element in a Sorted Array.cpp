
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int start=1,end=nums.size(),mid;
        while(start<=end){
        mid=(start+end)/2;
		if(nums[mid]<target) start=mid+1;
		else if(nums[mid]>target) end=mid-1;
		else if(nums[mid]==target) {
			ans.push_back(mid);
			start=mid+1;
		     }
    }
        if(ans.empty()) return {-1,-1};
        return ans;
    }
};
