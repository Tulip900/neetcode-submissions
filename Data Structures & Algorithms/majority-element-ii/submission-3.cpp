class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        int n=nums.size();
        if (n==1) return nums;
        for(int x:nums){
            freq[x]++;
        }
        for(auto p:freq){
            if(p.second>n/3){
                ans.push_back(p.first);
            }
        }
       // if(ans.size()==0) return nums;
        return ans;
    }
};