class Solution{
    public:
    int DivisibleByEight(string s){
         int n = s.length();
    int lastThreeDigits = (s[n - 3] - '0') * 100 + (s[n - 2] - '0') * 10 + (s[n - 1] - '0');

    if (lastThreeDigits % 8 == 0) {
        return 1;
    } 
        return -1;
    }
};
