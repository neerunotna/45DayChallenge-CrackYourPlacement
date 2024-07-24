//leetcode- 28
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j,k=0;
       for(i=0;i<haystack.length();i++)
       { 
           if(haystack[i]==needle[0])
             {     k=1;
                 for(j=1;j<needle.length();j++)
                 {
                     if(haystack[i+k]!=needle[k])
                      break;
                      k++;
                 }
                 if(j>=needle.length())
                    return i;
             }
       }
       return -1;
    }
};