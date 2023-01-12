
//https://www.interviewbit.com/problems/first-repeating-element/?utm_medium=referral&utm_source=https://www.interviewbit.com/courses/programming/

int Solution::solve(vector<int> &A) {
    int ans=-1;
    set<int>s;
    for(int i=A.size()-1;i>=0;i--){
        if(s.find(A[i])!=s.end()) ans=A[i];
        s.insert(A[i]);
    }
    return ans;
}
