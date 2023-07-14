Bobble BackgroundBobble Head
Menu


Refresh

Time (IST)	Status	Lang	Test Cases	Code
2022-11-07 10:23:49	Correct	cpp	160 / 160	View
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if(N==0)
        {
            return ;
        }
        else
        {
            printNos(N-1);
        }
        cout<<N<<" ";
        
    }
};
