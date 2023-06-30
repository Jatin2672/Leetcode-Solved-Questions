class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minimum=prices[0];
        int maximum=INT_MIN;
        for(int i=0;i<prices.size();i++){
            minimum=min(minimum,prices[i]);
            profit=prices[i]-minimum;
            maximum=max(maximum,profit);
        }
        if(maximum>0){
            return maximum;
        }else{
            return 0;
        }
    }
};