package divideAndConquer;

public class search_a_2dmatrix_74 {
    public boolean searchMatrix(int[][] matrix, int target) {
        //在二维数组里找第一个大于等于target的数
        if(matrix.length==0||matrix[0].length==0)return false;
        int n=matrix.length, m=matrix[0].length;
        int l=0,r=m*n-1;
        while(r>l){
            int mid=l+r >> 1;
            if(matrix[mid/m][mid%m]>=target){
                r=mid;
            }
            else l=mid+1;
        }
        if(matrix[l/m][l%m]==target)return true;
        return false;
    }
}
