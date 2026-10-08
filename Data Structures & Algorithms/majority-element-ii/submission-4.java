class Solution {
    public List<Integer> majorityElement(int[] nums) {
        HashMap<Integer,Integer> freq=new HashMap<>();
        int n=nums.length;
        List <Integer> ans=new ArrayList<>();
        for(int x:nums){
            freq.put(x,freq.getOrDefault(x,0)+1);
        }
        for(Map.Entry<Integer,Integer> p: freq.entrySet()){
            if(p.getValue()>n/3){
                ans.add(p.getKey());
            }
        }
        return ans;

    }
}