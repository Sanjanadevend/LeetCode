class Solution {
public:
    int rob(vector<int>& nums) {
    
int n = nums.size();
vector<int>dp(n+1);

if(n==0) //size of nums array is 0
{
    return 0;
}
if(n==1) //size of array is pnly one
{
    return nums[0];
}
dp[0] = nums[0]; //first house to rob
dp[1] = max(nums[0], nums[1]); //second house to rob

for(int i=2; i<n; i++)
{
    dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
}
return dp[n-1];


    }
};