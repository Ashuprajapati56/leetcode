class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Check rows
        for(int i = 0; i < n; i++) {
            unordered_map<int, int> mp;

            for(int j = 0; j < n; j++) {
                mp[matrix[i][j]]++;
            }

            for(auto it : mp) {
                if(it.second > 1) {
                    return false;
                }
            }
        }

        // Check columns
        for(int j = 0; j < n; j++) {
            unordered_map<int, int> mp;

            for(int i = 0; i < n; i++) {
                mp[matrix[i][j]]++;
            }

            for(auto it : mp) {
                if(it.second > 1) {
                    return false;
                }
            }
        }

        return true;
    }
};