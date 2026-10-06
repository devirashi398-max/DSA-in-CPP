class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, max_len=0, zero_freq=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                zero_freq++;
                while(zero_freq>k){
                    if(nums[left]==0){
                        zero_freq--;
                    }
                    left++;
                }
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};
