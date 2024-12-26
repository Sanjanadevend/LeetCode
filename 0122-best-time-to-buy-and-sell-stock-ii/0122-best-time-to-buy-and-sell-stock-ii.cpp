class Solution {
public:
    int maxProfit(vector<int>& arr) {
          
        int n = arr.size();
        int res = 0;
        
        for(int i=1; i<n; i++)
        {
            //if current price is greter than previous price ,then buy at previosu day and sell at current day
            if(arr[i]>arr[i-1] )
            {
                res += arr[i]- arr[i-1];
            }
        }
        return res;
    }
    
};