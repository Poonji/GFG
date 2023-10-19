class Solution{
public:

vector<int> valueEqualToIndex(int arr[], int n) {
    vector <int> a;
  for(int i=1;i<=n;i++){
    if(arr[i-1]==i){
      a.push_back(arr[i-1]);
    }
     
  }
   
  return a;
}
};
