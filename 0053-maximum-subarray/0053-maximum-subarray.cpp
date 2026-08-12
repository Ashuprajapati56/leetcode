class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
    int cs=0;
    int maxsum=nums[0];
    for(int i=0;i<n;i++){
        cs+=nums[i];
        maxsum=max(cs,maxsum);
        if(cs<0){
            cs=0;
        }
    }
        return maxsum;
      
    }
};