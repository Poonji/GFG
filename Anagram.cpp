class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int c=a.length();
        int d=b.length();
        if(c!=d)
        {
            return false;
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        return a==b;
        
        
    }

};
