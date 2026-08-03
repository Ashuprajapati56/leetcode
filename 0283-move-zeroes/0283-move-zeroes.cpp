class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int z=temp.size();
        for(int i=z;i<nums.size();i++){
            temp.push_back(0);


        }
        nums=temp;
           }
};