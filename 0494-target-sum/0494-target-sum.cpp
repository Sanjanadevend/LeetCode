class Solution {
public:
int helperRec(vector<int> &nums, int target, int index, int csum)
{
    if(index == nums.size())
    {
        if(target == csum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
   int addCase = helperRec(nums, target, index+1, csum+ nums[index]);
   int MinusCase = helperRec(nums, target, index+1, csum-nums[index]);

   return addCase + MinusCase;
}


    int findTargetSumWays(vector<int>& nums, int target) {
        return helperRec(nums, target, 0, 0);
    }
};