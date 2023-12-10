class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {

        for (int i = 0; i < n; ++i) {
            int sum=0;

            for (int j = i; j < n; ++j) {
                sum += arr[j];

            
                if (arr[j] == 0 || sum == 0) {
                    return true; 
                }
            }
        }

        return false; 
    }
};
