//leetcode -1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //sort(nums.begin(),nums.end());
        int i=0,j=1;
       for(int i=0;i<nums.size();i++)
        {
          for(int j=i+1;j<nums.size();j++)
           {  if(nums[i]+nums[j]==target)
                return {i,j};
           }
      
        }
        return {i,j};
    }
};