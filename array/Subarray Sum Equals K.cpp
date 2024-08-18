//Subarray Sum Equals K
class Solution {
public:
    int *counter=new int[20000000]();
    int subarraySum(vector<int>& nums, int k) {
      int ans=0;
        //int *counter=Counter+10000000;

        counter[nums[0] ]++;
        for(int l=1;l<nums.size();l++){
            nums[l]+=nums[l-1];
            counter[nums[l] ]++;
        } ans+=counter[k];

        for(int val:nums){
            counter[val ]--;            
            ans+=counter[k+val ];
        }  
        return ans;
    }
};