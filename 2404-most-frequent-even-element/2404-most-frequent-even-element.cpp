class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       
        unordered_map<int, int> count;
        int max_freq = 0;
        int ans = -1;
        
        for (int num : nums) {
            if (num % 2 == 0) {
                count[num]++; // Increment count
                
                int current_freq = count[num];
                
                // Update ans dynamically if we find a better candidate
                if (current_freq > max_freq || (current_freq == max_freq && num < ans)) {
                    max_freq = current_freq;
                    ans = num;
                }
            }
        }
        
        return ans;
      

      
    }
};