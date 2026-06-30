class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        int val = 1;
        while(top <= bottom && left <= right){
            // traverse the top
            for(int i = left; i <= right; i++)
                matrix[top][i] = val++;
            top++;

            // traverse the right
            for(int i = top; i <= bottom; i++)
                matrix[i][right] = val++;
            right--;

            // traverse the bottom
            if(top <= bottom){
                for(int i = right; i >= left; i--)
                    matrix[bottom][i] = val++;
                bottom--;
            }

            // traverse the left
            if(left <= right){
                for(int i = bottom; i >= top; i--)
                    matrix[i][left] = val++;
                left++;
            }
        }
        return matrix;
    }
};