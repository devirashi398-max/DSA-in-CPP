class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int close_sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int a=nums[i];
          int left=i+1;
          int right=nums.size()-1;
          while(left<right){
          int current_sum=nums[i]+nums[left]+nums[right];
          if(abs(target-current_sum)<abs(target-close_sum)){
            close_sum=current_sum;
          }  
            if(close_sum<target){
                left++;
            }

            else{
                right--;
            }
          
          }
        }
        return close_sum;
    }
};
