class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int cnt = 0;
        int el;

        // Candidate find karna
        for(int i = 0; i < nums.size(); i++) {

            if(cnt == 0) {
                el = nums[i];
                cnt = 1;
            }
            else if(el == nums[i]) {
                cnt++;
            }
            else {
                cnt--;
            }
        }

        // Candidate ki actual frequency check karna
        int cnt1 = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(el == nums[i]) {
                cnt1++;
            }
        }

        if(cnt1 > nums.size()/2) {
            return el;
        }

        return -1;
    }
};