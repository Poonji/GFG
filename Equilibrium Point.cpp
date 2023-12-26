class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1)
        {
            return a[0];
        }
         long long  total =0 ;
        for(int i=0;i<n;i++)
        {
               total+=a[i] ;
        }
        
        long long  sum = 0 ;
        
        for(int i = n-1 ;i>=0 ;i--){
            
            sum +=a[i] ;
            
            if(sum == total){
                return i+1 ;
            }
            
            total = total - a[i] ;
        }
         return -1 ;
        }

};
