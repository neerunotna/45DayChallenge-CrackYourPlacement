// leetcode-88
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0)
          nums1=nums2;
         int i=0,j=0,k=0;
        while(i<m+k && j<n)
        { if(nums1[i]<=nums2[j] && nums1[i+1]>nums2[j])
             {
                 nums1.insert(nums1.begin()+1+i,nums2[j]);
                 i++;
                 j++;
                 k++;
             }
           else if(nums2[j]<nums1[i])
             { nums1.insert(nums1.begin()+i,nums2[j]);
                j++;
                k++;
             }
           else
             i++;
        }
        i=0;
        while (j<n)
        {
            nums1.insert(nums1.begin()+m+i+k,nums2[j]);
            i++;
            j++;
        }
        nums1.erase(nums1.begin()+m+n,nums1.end());
      
    }
};