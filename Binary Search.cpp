class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int startIndex = 0;
        int endIndex = n-1;
        while(startIndex<=endIndex){
            int mid = (startIndex+endIndex)/2;
            if(arr[mid]<k){
                startIndex = mid+1;
            }
            else if(arr[mid]>k){
                endIndex = mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};
