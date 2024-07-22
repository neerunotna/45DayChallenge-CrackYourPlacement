//Leetcode-75
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,n=nums.size(),j,p;
        for(i=1;i<n;i++)
        { j=i-1;
          p=nums[i];
              while(j>=0 && nums[j]>p){
                  nums[j+1]=nums[j];
                  j--;
            }
             nums[j+1]=p;
        }
    }
};