class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure binary search is performed on the smaller array to minimize the search space
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int partitionX = low + (high - low) / 2;
            int partitionY = (m + n + 1) / 2 - partitionX;

            // Handle edge cases where the partition is at the extreme ends
            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

            // Check if we have found the correct partition
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                // If combined length is even
                if ((m + n) % 2 == 0) {
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                } 
                // If combined length is odd
                else {
                    return max(maxLeftX, maxLeftY);
                }
            } 
            // If maxLeftX is too large, move the partition left in nums1
            else if (maxLeftX > minRightY) {
                high = partitionX - 1;
            } 
            // If maxLeftY is too large, move the partition right in nums1
            else {
                low = partitionX + 1;
            }
        }

        return 0.0;
    }
};