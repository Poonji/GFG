

/*  Write your function here */

/* The function should be named calcSum
    and accepts three parameters of integer type
    and returns the sum of the three integers */
    
int calcSum(int a, int b, int c)    
{
   // int n;
    //cin>>n; 
    //cin>>a>>b>>c;
    //int d;
    //d=a+b+c;
    //return d;
    int sum=0;
    sum=a+b+c;
    return sum;
}
int mmain()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<calcSum(a,b,c);
    return 0;
}
