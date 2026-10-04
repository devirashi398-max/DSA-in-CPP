class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int a=nums[i];
            if( i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int b=i+1;
            int c=nums.size()-1;
            while(b<c){
                if(a+nums[b]+nums[c]==0){
                    ans.push_back({nums[i],nums[b],nums[c]});
                    while(b<c && nums[b]==nums[b+1]) b++;
                    while(b<c && nums[c]==nums[c-1])c--;
                    b++;
                    c--;
                }
                
                
                else if(a+nums[b]+nums[c]<0){
                    b++;
                }

                else{
                    c--;
                }
            }
        }

        return ans;
    }
};
