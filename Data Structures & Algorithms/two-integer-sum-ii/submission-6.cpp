class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>ans;
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int sum=arr[i]+arr[j];
            if(sum==target){
                return {i+1,j+1};
            }
            if(sum>target){
                j--;
            }
            else i++;
        }
        return {};
    }
};
