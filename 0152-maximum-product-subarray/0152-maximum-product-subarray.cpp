class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            int pro=1;
            for(int j=i;j<n;j++){
                pro=pro*nums[j];
                maxi=max(pro,maxi);
            }
        }
        return maxi;
    }
};