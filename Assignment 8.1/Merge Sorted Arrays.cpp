
//https://leetcode.com/problems/merge-sorted-array/submissions/874129021/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(n+m,0);
        int i=0,j=0,index=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]) ans[index++]=nums1[i++];
            else ans[index++]=nums2[j++];
        }
        while(i<m) ans[index++]=nums1[i++];
        while(j<n) ans[index++]=nums2[j++];
        nums1.clear();
        nums1=ans;
    }
};
