//leetcode -121

class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int low = 0;
        int maxprofit = 0;
        while(low<prices.size()-1 && prices[low]>=prices[low+1])
           low++;
        int i=low+1;
        int p;
        while(i<prices.size()){
            p=prices[i]-prices[low];
            maxprofit=max(maxprofit,p);
            i++;
            while(i<prices.size() && prices[low]>prices[i]){
                low=i;
                i++;
            }
        }
        return maxprofit;
    }
};