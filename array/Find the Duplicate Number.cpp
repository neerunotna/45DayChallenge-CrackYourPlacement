//Leetcode -287
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int i=0,n=nums.size();
         vector<int> num(n+1,0);
        for(i=0;i<n;i++){
            num[nums[i]]++;
            if(num[nums[i]]==2)
               break;
        }
       return nums[i];
    }
};