class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
          long sum=0;
        long maxi=0;
        for(int i=0;i<K;i++){
            sum+=Arr[i];
        }
        maxi=sum;
        for(int i=K;i<N;i++){
            sum=sum+Arr[i]-Arr[i-K];
            if(sum>maxi){
                maxi=sum;
            }
        }
        return maxi;
    }
};
