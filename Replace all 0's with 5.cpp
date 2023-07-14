class Solution{
  public:
    int convertFive(int n)
    {
        string str=to_string(n);
        for(int i=0;i<str.length();i++){
            if(str[i]=='0')
            {
                str[i]='5';
            }
        }
        int ans=stoi(str);
        return ans;
    }
};
