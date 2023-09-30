void swap(int *A, int *B){
    int temp=*A;
    *A=*B;
    *B=temp;
    //cout<<*A<<*B;
    
}

// Function to swap A and B
// using reference
void swap(int &A, int &B){
    int temp=A;
    A=B;
    B=temp;
    //cout<<A<<B;
  
}
