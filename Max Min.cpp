class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int min=INT_MIN;
          int max=INT_MAX;
        for(int i=0;i<N;i++)
        {
            if(min<A[i])
            {
                min=A[i];
            }
            if(max>A[i])
            {
                max=A[i];
            }
        }
        return min+max;
    }

};
