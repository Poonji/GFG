class Solution{
    public:
    int maxIndexDiff(int a[], int n) 
    { 
         int ans=0;
        for(int i=0;i<n;i++){
            int j=n-1;
            while(a[i]>a[j] && j>i ){
                j--;
            }
            ans=max(ans,j-i);
        }
        
        return ans;
    }
};
