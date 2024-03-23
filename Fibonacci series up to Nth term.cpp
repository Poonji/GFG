  public:
    vector<int> Series(int n) {
         vector<int> ans;
        int a = 0, b = 1;
        ans.push_back(a);
        ans.push_back(b);
        for (int i=0; i<n-1; i++){
            int temp = (a+b)%1000000007;
            ans.push_back(temp);
            a = b;
            b = temp;
        }
        return ans;
    }
};
