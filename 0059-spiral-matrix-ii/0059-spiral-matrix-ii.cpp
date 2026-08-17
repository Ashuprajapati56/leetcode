class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans(n, vector<int>(n));

        int top = 0;
        int left = 0;
        int bottom = n - 1;
        int right = n - 1;

        int count = 0;

        while (top <= bottom && left <= right) {

            // Left -> Right
            for (int i = left; i <= right; i++) {
                count++;
                ans[top][i] = count;
            }
            top++;

            // Top -> Bottom
            for (int i = top; i <= bottom; i++) {
                count++;
                ans[i][right] = count;
            }
            right--;

            // Right -> Left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    count++;
                    ans[bottom][i] = count;
                }
                bottom--;
            }

            // Bottom -> Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    count++;
                    ans[i][left] = count;
                }
                left++;
            }
        }

        return ans;
    }
};