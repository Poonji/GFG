class Solution{
public:
    int toyCount(int N, int K, vector<int> arr) {
        int toys=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<N;i++)
    {
        if(arr[i]<=K){
        K-=arr[i];
        toys++;
        }
    }
        return (toys);
    }
};
