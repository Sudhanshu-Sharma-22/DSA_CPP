
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/882622727/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size()==1 && nums[0]==target) return {0,0};
        vector<int>ans;
        int low=0,high=nums.size()-1,mid,temp=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]<target) low=mid+1;
            else if(nums[mid]>target) high=mid-1;
            if(nums[mid]==target) {
                temp=mid;
                break;
            }
        }
        int start=temp,end=temp;
        while(start>=0 && nums[start]==target) start--;
        while(end<nums.size() && nums[end]==target) end++;
        if (temp==-1) return {-1,-1};
        return {++start,--end};
    }
};
