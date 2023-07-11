int search(int arr[], int n, int x, int k)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]==x)
        {
            return i;
        }
        else {
            i++;
        }
    }
    return -1;
}
