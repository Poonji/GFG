class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	   int s=0,e=S.size()-1;
	   while(s<e)
	   {
	       if(S[s]!=S[e])
	       {
	           return 0;
	       }
	       else
	       {
	           s++;
	           e--;
	       }
	   }
	   return 1;
	   }

};
