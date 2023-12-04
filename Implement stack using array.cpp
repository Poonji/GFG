void MyStack :: push(int x)
{
    if(top>999)
    {
        return ;
    }
    {
    top=top+1;
    arr[top]=x;
    }
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top==-1)
    {
        return -1;
    }
    int pos=arr[top];
    top=top-1;
    return pos;
}
