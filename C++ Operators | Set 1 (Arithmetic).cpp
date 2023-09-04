class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        vector<int>v;
        v.push_back(A+B);
        v.push_back(A*B);
        if(A>B)
        {
        v.push_back(A-B);
        v.push_back(A/B);
    }
    else
    {
        v.push_back(B-A);
        v.push_back(B/A);
    }
    return v;
    }
};
