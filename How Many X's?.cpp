class Solution {
  public:
    int countX(int L, int R, int X) {
        int count=0;
        for(int i=L+1;i<R;i++)
        {
            string num=to_string(i);
            count+=std::count(num.begin(),num.end(),'0'+X);
        }
        
        return count;
    }
};
