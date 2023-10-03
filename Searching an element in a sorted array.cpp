class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    {
        int start=0;
        int end=N-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(K==arr[mid]){
            return 1;
        }
            else if(K<arr[mid]){
            end=mid-1;
            }
            else{
            start=mid+1;
            }
        mid=start+(end-start)/2;
        }
    return -1;
    }
};
