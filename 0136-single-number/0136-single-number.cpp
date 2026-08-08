class Solution {
public:
    int singleNumber(vector<int>& nums) {
        

        for(int i=0;i<nums.size();i++){
           int temp=nums[i];
           int count=0;
            for(int j=0;j<nums.size();j++){
                if(temp==nums[j]){
                    count++;
                }
            }
            if(count==1){
                return temp;
            }

            
        }
        return -1;
    }
};