class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int>v;
             int s = pattern.size();
            
            int t = text.size();
            
            int j = 0;
            
            for(int i = 0; i< t; i++){
                
                string g = text.substr(i,i+s-j);
                
                if (g == pattern){
                    
                    v.push_back(i+1);
                }
                j++;
            }
            
            return v;
        }
     
};
