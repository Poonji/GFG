class Solution{
public:	
	int print2largest(int arr[], int n) {
	       int a1 = INT_MIN;
        for(int i = 0; i<n; i++){
            a1 = max(a1, arr[i]);
        }
        int ans = -1;
        for(int i = 0; i<n; i++){
            if(arr[i] != a1){
                ans = max(ans, arr[i]);
            }
        }
        return ans;
    }
};
