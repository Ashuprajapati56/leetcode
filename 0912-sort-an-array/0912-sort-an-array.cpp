class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int n = nums.size();

        // Build Max Heap
        for(int i = n/2 - 1; i >= 0; i--) {
            int j = i;

            while(2*j + 1 < n) {
                int child = 2*j + 1;

                if(child + 1 < n && nums[child + 1] > nums[child]) {
                    child++;
                }

                if(nums[j] >= nums[child]) {
                    break;
                }

                swap(nums[j], nums[child]);
                j = child;
            }
        }

        // Sort
        for(int i = n - 1; i > 0; i--) {
            swap(nums[0], nums[i]);

            int j = 0;

            while(2*j + 1 < i) {
                int child = 2*j + 1;

                if(child + 1 < i && nums[child + 1] > nums[child]) {
                    child++;
                }

                if(nums[j] >= nums[child]) {
                    break;
                }

                swap(nums[j], nums[child]);
                j = child;
            }
        }

        return nums;
    }
};