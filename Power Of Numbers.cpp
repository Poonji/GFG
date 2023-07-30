class Solution{
    public:
    
    long long power(int N,int R)
    {
         if(N<0)  N=1/N ; R=abs(R);
       
     long long ans = 1;
        long long baseValue = N;
    
    while (R > 0) {
        if (R % 2 == 1) {
            ans = (ans * baseValue) % 1000000007;
        }
        baseValue = (baseValue * baseValue) % 1000000007;
        R /= 2;
    }

    return ans;
    }

};
