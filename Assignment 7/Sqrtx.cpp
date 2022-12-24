
//https://leetcode.com/problems/sqrtx/submissions/864744784/

class Solution {
public:
    int mySqrt(int x) {
        long long start=1,end=x;
        while(start<=end){
            long long mid=(start+end)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x) start=mid+1;
            else if(mid*mid) end=mid-1;
        }
        return end;
    }
};
