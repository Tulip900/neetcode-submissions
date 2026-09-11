class Solution {
public:
    int maxDifference(string s) {
        int mine=INT_MAX; // min even frequency
        int maxo=0; // max odd frequency
        unordered_map<char,int>freq;
        for(char x:s){
            freq[x]++;
        }
        for(auto p:freq){
            if(p.second%2==0){
                mine=min(mine,p.second);
            }
            else maxo=max(maxo,p.second);
        }
        return maxo - mine;
    }
};