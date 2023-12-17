class Solution{
public:	
	int findMaxSum(int *arr, int n) {
	    int sum1=0,sum2=0;
	    for(int i=0;i<n;i++)
	    {
	        int cur=max(sum1,arr[i]+sum2);
	        sum2=sum1;
	        sum1=cur;
	    }
	    
	    return sum1;
	    
	}
};
