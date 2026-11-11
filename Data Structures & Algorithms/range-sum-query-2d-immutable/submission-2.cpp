class NumMatrix {

    vector<vector<int>> data;
    vector<vector<int>> pres;

    void print() const {
        for (const auto& row : pres) {
            for (int x : row)
                cout << setw(4) << x;
            cout << '\n';
        }
    }

public:
    NumMatrix(vector<vector<int>>& matrix) {
        data = matrix;
        pres.assign(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
        for ( int r = 1; r < data.size() + 1; r++)
            for (int c = 1; c < data[0].size() + 1; c++)
                pres[r][c] += pres[r - 1][c] + pres[r][c - 1] + data[r - 1][c - 1] - pres[r - 1][c - 1];
        print();

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return pres[row2 + 1][col2 + 1] - pres[row2 + 1][col1] - pres[row1][col2 + 1] + pres[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */