//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int colend=m-1,rowend=n-1,rows=0,col=0,count=0;
 		while(count!=n*m)
 		{
 		    for(int i=col;i<=colend;i++)
 		    {
 		        count++;
 		        if(count==k)
 		        return a[rows][i];
 		    }
 		    rows++;
 		    
 		    for(int i=rows;i<=rowend;i++)
 		    {
 		        count++;
 		         if(count==k)
 		             return a[i][colend];
 		    }
 		    colend--;
 		    for(int i=colend;i>=col;i--)
 		    {
 		        count++;
 		        if (count==k)
 		        return a[rowend][i];
 		    }
 		    rowend--;
 		    for(int i=rowend;i>=rows;i--)
 		    {
 		        count++;
 		        if (count==k)
 		        return a[i][col];
 		    }
 		    col++;
 		}
 		return 0;
 		
    }
};
