
//https://www.interviewbit.com/problems/check-palindrome/

int Solution::solve(string A) {
    map<char,int>mp;
    for(int i=0;i<A.size();i++) mp[A[i]]++;
    int odd=0;
    for(auto x:mp){
        if(x.second%2!=0) odd++;
        if(x.second%2!=0 && odd>1) return 0;
    }
    return 1;
}
