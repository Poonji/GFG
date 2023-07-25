class Solution
{
public:
void solve(vector<int>arr,vector<int>&res,int i,int n,int sum)
{
    if(i==n){
    res.push_back(sum);
    return;
    }
    
solve(arr,res,i+1,n,sum+arr[i]);
solve(arr,res,i+1,n,sum);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>res;
        solve(arr,res,0,N,0);
        sort(res.begin(),res.end());
        return res;
    }
};
