class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> temp;
        vector<int> ans;

        // Frequency count
        for (int num : nums) {
            temp[num]++;
        }

        // Check elements occurring more than n/3 times
        for (auto it : temp) {
            if (it.second > nums.size() / 3) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};