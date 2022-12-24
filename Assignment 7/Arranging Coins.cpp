
//https://leetcode.com/problems/arranging-coins/submissions/864766407/

class Solution {
public:
    int arrangeCoins(int n) {
        int rows=0;
        for(int i=0;i<=n;i++){
            rows=i;
            n=n-i;
            if(n<=0) break;
        }
        return rows;
    }
};
