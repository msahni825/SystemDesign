class NumMatrix {
public:
     vector<vector<int>> demo_matrix;
    NumMatrix(vector<vector<int>>& matrix) {
        demo_matrix=matrix;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                demo_matrix[i][j]+=demo_matrix[i][j-1];
            }
        } 
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                demo_matrix[j][i]+=demo_matrix[j-1][i];
            }
        } 
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        int a=0;
        int b=0;
        int c=0;
        if(c1!=0){
            a=demo_matrix[r2][c1-1];
        }
        if(r1!=0){
            b=demo_matrix[r1-1][c2];
        }
        if(r1!=0 and c1!=0){
            c=demo_matrix[r1-1][c1-1];
        }
        return demo_matrix[r2][c2]-a-b+c;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
