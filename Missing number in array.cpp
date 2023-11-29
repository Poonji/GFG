class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum=(n*(n+1))/2;
        int total=0;
        for(int i=0;i<n-1;i++)
        {
            total=total+array[i];
        }
        int num=sum-total;
        return num;
    }
};
