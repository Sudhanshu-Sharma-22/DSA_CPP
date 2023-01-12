
//https://www.interviewbit.com/problems/first-repeating-element/?utm_medium=referral&utm_source=https://www.interviewbit.com/courses/programming/

int Solution::solve(vector<int> &A) {
    unordered_map<int,int>mp;
    for(int i=0;i<A.size();i++) mp[A[i]]++;
    for(int a:A) if(mp[a]>1) return a;
    return -1;
}
