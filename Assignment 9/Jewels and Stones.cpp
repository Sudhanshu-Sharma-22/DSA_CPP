
//https://leetcode.com/problems/jewels-and-stones/submissions/878590669/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        int count=0;
        for(int i=0;i<jewels.size();i++) mp[jewels[i]]++;
        for(auto x:mp){
            for(int i=0;i<stones.size();i++) if(x.first==stones[i]) count++;
        }
        return count;
    }
};
