class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans; 

        //dimensions
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        //jb bhi element print krenge to count update krte jayenge
        int total = row*col;

        //index initialization
        int startingRow = 0;
        int startingColumn = 0;
        int endingRow = row - 1;
        int endingColumn = col - 1;

        while(count < total){
            //har case me count saath saath check krte chalo
            
            //print starting row
            for(int index = startingColumn ;count < total && index<=endingColumn;index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //print ending col
            for(int index = startingRow ;count < total && index<=endingRow;index++){
                ans.push_back(matrix[index][endingColumn]);
                count++;
            }
            endingColumn--;

            //print ending row
            for(int index = endingColumn ;count < total && index>=startingColumn;index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //print starting col
            for(int index = endingRow ;count < total && index>=startingRow;index--){
                ans.push_back(matrix[index][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return ans;
    }
};
