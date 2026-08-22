class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>temp;
       for(auto num:nums){
        temp[num]++;
       }
       for(auto it:temp){
        if(it.second>nums.size()/2)
        return it.first;
       }
       return -1;
    }
};