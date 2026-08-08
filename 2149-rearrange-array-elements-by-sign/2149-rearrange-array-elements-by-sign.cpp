class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> positive;
        vector<int> negative;
        vector<int> temp;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                positive.push_back(nums[i]);
            }
            else {
                negative.push_back(nums[i]);
            }
        }

        for(int i = 0; i < positive.size(); i++) {
            temp.push_back(positive[i]);
            temp.push_back(negative[i]);
        }

        return temp;
    }
};