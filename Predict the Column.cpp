class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int res=-1;
        int max=0;
        for(int j=0;j<N;j++){
        int cnt=0;
            for(int i=0;i<N;i++){
                if(arr[i][j]==0){
                    cnt++;
                }
            }
            if(cnt>max){
                max=cnt;
                res=j;
            }
        }
        return res;
    }
};
