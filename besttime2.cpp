class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
        int prof=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minn){
                minn=prices[i];
            }
            if(prof<prices[i]-minn){
                prof=prices[i]-minn;
            }
        }
        return prof;
    }
};