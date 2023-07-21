class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int count=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(a[i]);
        }
            for(int i=0;i<m;i++)
            {
                v.push_back(b[i]);
        }
            sort(v.begin(),v.end());
                  int x=v.size();
        for(int i=0;i<x;i++)
        {
            if(v[i]!=v[i+1])
            {
                count++;
            }
        }
            return count;
    }
};
