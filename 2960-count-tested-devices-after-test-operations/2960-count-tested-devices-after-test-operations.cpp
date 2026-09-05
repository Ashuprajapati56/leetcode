class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count = 0;

        for(int battery : batteryPercentages) {
            if(battery > count) {
                count++;
            }
        }

        return count;
    }
};