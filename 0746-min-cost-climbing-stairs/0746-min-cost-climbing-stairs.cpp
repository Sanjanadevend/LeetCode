class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n==0 || n==1)
        {
            return n;
        }

      for(int i=2; i<n; i++)
      {
        cost[i]+= min(cost[i-1] , cost[i-2]);
      }
      return min(cost[n-1], cost[n-2]);
    }
};



