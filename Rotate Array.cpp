class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        vector<int> temp(n);
        for(int i=0;i<n;i++){
        temp[i]=arr[(i+d)%n];
            }
        for(int i=0;i<n;i++)
        arr[i]=temp[i];
    }
};
