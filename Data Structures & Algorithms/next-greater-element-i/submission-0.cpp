class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums2.size();
        int i=0;

        while(i<nums1.size())
        {
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                    int k=j+1;
                
                    while(k<n){
                        if(nums2[j]<nums2[k]){
                            ans.push_back(nums2[k]);
                            break;
                        }
                        k++;
                    }
                    if(k==n) ans.push_back(-1);
                    break;

                }
            }
            i++;
        }
        return ans;
    }
};