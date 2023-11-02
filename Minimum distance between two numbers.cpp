class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
          int mini = INT_MAX, xi = -1, yi = -1;
    
        for(int i = 0; i < n; i++) {
            if(a[i] == x)
                xi = i;
            if(a[i] == y)
                yi = i;
                
            if(xi != -1 and yi != -1) 
                mini = min(mini, abs(yi - xi));
        }
        return mini==INT_MAX ? -1: mini;
    }
};
