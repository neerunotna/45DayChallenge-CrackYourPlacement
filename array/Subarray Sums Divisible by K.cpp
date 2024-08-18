//leetcode -974
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      unordered_map<int,int> prefix;
      prefix[0]=1;
      int presum=0,count=0;
      for(int i=0;i<nums.size();i++){
        
         presum+=nums[i];
         presum=presum%k;
         int remove=(presum+k)%k;
         count+=prefix[remove];
         prefix[remove]+=1;
        // cout<<remove<<" "<<prefix[remove]<<endl;
      }
        return count;
    }
};