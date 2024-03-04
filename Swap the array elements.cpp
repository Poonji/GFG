class Solution{
  public:
    void swapElements(int arr[], int n){
        int temp;
        int i;
        for(i=0;i<n-2;i++)
        {
           swap(arr[i],arr[i+2]);
        }
    }
};
