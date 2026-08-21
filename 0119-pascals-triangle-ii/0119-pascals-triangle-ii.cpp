class Solution {
public:
    vector<int> getRow(int rowIndex) {
        

        int i=rowIndex;
            vector<int> row;

            long long first = 1;

            for (int j = 0; j <= i; j++) {
                row.push_back(first);

                first = first * (i - j) / (j + 1);
            }

         
        

        return row;
    
        
        
    }
};