class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<n){
            while(i<j){
                if(nums[i]==nums[j] && (abs(i-j))<=k){
                    return true;    
                }
                j--;
            }
            i++;
            j=n-1;
        }
        return false;
    }
};