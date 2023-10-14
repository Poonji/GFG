
#include<vector>
#include<stack>
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<int>s;
        vector<long long>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            while(!s.empty()&&arr[i]>arr[s.top()])
            {
                ans[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};
