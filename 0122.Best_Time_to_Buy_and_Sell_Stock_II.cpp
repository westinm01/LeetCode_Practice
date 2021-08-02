/*Description: Find the maximum profit from the following stock prices.*/

//runtime: 4ms (faster than 91.76% of submissions)


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sum=0;
        for(int i=1;i<prices.size();i++){
            if(prices.at(i)>prices.at(i-1)){
                sum+=prices.at(i)-prices.at(i-1);
            }
        }
        return sum;
    }
};