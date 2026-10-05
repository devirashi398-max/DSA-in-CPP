class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0];
        int current_sum=0;
        for(int i=0;i<nums.size();i++){
            current_sum+=nums[i];
            max_sum=max(current_sum,max_sum);
            current_sum=max(0,current_sum);
        }
        return max_sum;
    }
};
