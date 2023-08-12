vector<int> find(int arr[], int n , int x )

    {
    vector<int>v;
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end){
        if(x==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
        else if(x>arr[mid]){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    v.push_back(ans);
    start=0;
     end=n-1;
     mid=(start+end)/2;
    while(start<=end){
        if(x==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        else if(x>arr[mid]){
            start=mid+1;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    v.push_back(ans);
    return v;
}
