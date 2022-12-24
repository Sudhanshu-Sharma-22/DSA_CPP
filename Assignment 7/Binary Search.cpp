
//https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size(),start=0,end=size;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]<target) start=mid+1;
            else if(nums[mid]>target) end=mid-1;
            else if(nums[mid]==target) return mid;
            else return end;
        }
        return -1;
    }
};
