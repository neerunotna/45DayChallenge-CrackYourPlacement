//Leetcode-26
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     vector<int>::iterator it;
     it=nums.begin();
     for(it=it+1;it<nums.end();it++)
       {   
          if(*it==*(it-1))
          { nums.erase(it);
              it--;
          }
       } 
       return nums.size();
    }
};