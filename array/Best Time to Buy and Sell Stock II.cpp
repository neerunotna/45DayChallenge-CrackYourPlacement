//leetcode-121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalp=0,buy=0,i=0;
        while(i < prices.size()-1){
            
            while(buy<prices.size()-1 && prices[buy]>prices[buy+1])
                buy++;
                if(buy>=prices.size()-1)
                  break;
            i=buy+1;
            while(i<prices.size()-1 && prices[i]<prices[i+1])
                i++;
            totalp+=(prices[i]-prices[buy]);
            buy=i+1;
            i++;
        }
        return totalp;
    }
};