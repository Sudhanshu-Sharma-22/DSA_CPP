
//https://leetcode.com/problems/find-players-with-zero-or-one-losses/submissions/895788014/

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>winners;
        map<int,int>losers;
        vector<vector<int>>ans;
        for(int i=0;i<matches.size();i++) winners[matches[i][0]]++;
        for(int i=0;i<matches.size();i++){
            if(winners.find(matches[i][1])!=winners.end()) winners[matches[i][1]]=0;
            losers[matches[i][1]]++;
        }
        vector<int>win,lose;
        for(auto x:winners) if(x.second>0) win.push_back(x.first);
        for(auto x:losers) if(x.second==1) lose.push_back(x.first);
        ans.push_back(win);
        ans.push_back(lose);
        return ans;
    }
};
