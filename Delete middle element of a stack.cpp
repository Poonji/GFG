class Solution
{
public:
    void solve(stack<int>& s, int count, int sizeOfStack)
    {
        if (count == sizeOfStack / 2)
        {
            s.pop();
            return;
        }
        int num = s.top();
        s.pop();
        solve(s, count + 1, sizeOfStack);
        s.push(num);
    }

    void deleteMid(stack<int>& s, int N)
    {
        int count = 0;
        solve(s, count, N);
    }
};
