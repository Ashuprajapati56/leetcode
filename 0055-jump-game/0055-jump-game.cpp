class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;

        for(int i = 0; i < nums.size(); i++) {

            // agar current index tak pahunch hi nahi sakte
            if(i > farthest) {
                return false;
            }

            // maximum reachable index update karo
            farthest = max(farthest, i + nums[i]);

            // last index tak pahunch gaye
            if(farthest >= nums.size() - 1) {
                return true;
            }
        }

        return true;
    }
};