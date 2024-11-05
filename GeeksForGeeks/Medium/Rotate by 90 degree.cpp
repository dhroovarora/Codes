https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1




/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
// edge case 
    if(mat.size() == 1){
        return;
    }
// swap the rows till the middle of the given length 
    for(int i = 0; i < mat.size()/2; i++){
        swap(mat[i],mat[mat.size()-i-1]);
    }
// take transpose
    for(int i = 0; i < mat.size(); i++){
        for(int j = i +1; j < mat[0].size(); j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
}