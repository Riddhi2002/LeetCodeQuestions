class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int rowStart=0;
        int rowEnd=row-1;
        int colStart=0;
        int colEnd=col-1;
        while(colStart<=colEnd && rowStart<=rowEnd){
            if(colStart<=colEnd && rowStart<=rowEnd){
                for(int i=colStart; i<=colEnd; i++){
                    ans.push_back(matrix[rowStart][i]);
                }
                rowStart++;
            }
            if(colStart<=colEnd && rowStart<=rowEnd){
                for(int i=rowStart; i<=rowEnd; i++){
                    ans.push_back(matrix[i][colEnd]);
                }
                colEnd--;
            }
            if(colStart<=colEnd && rowStart<=rowEnd){
                for(int i=colEnd; i>=colStart; i--){
                    ans.push_back(matrix[rowEnd][i]);
                }
                rowEnd--;
            }
            if(colStart<=colEnd && rowStart<=rowEnd){
                for(int i=rowEnd; i>=rowStart; i--){
                    ans.push_back(matrix[i][colStart]);
                }
                colStart++;
            }
        }
        return ans;
    }
};