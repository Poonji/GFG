class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
           vector<int> ans;
        sort(arr, arr + n);
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[i + 1]) {
                ans.push_back(arr[i]);
                while (arr[i] == arr[i + 1]) {
                    i++;
                }
            }
        }
        
        if (ans.empty()) {
            return {-1};
        } else {
            return ans;
        }
    }
};
