class NumMatrix {
private:
    vector<vector<int>> data;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        data = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total = 0;

        for (size_t r = row1; r <= row2; r++)
            total += accumulate(data[r].begin() + col1, data[r].begin() + col2 + 1, 0);

        return total;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */