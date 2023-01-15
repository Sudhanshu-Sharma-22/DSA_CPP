
//https://leetcode.com/problems/jewels-and-stones/submissions/878600466/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        set<int>s;
        for(int i=0;i<jewels.size();i++) s.insert(jewels[i]);
        for(auto x:stones) if(s.count(x)) count++;
        return count;
    }
};
