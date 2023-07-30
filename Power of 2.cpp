class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0)
        return false;
        if(n==1)
        return true;
        while(n>1){
        int rem=n%2;
        if(rem==1)
        {
            return false;
        }
        n/=2;
        }
        return true;
    }
};
