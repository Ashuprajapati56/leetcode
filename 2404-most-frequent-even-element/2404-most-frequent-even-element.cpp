class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> temp;
        for (int num : nums) {
            if (num % 2 == 0) {
                temp[num]++;
            }
        }
        int ans = -1;
        int max= INT_MIN;
        for (auto it : temp) {
            int num = it.first;
            int freq = it.second;
            if (freq > max) {
                max = freq;
                ans = num;
            }
            else if (freq == max && num < ans) {
                ans = num;
            }
        }

        return ans;
    }
};