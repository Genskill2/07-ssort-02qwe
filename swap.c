void swap_max(int A[], int l, int index)
{    int temp=index;
    for(int i=index;i<l;++i)
        if(A[temp]<A[i])
          temp=i;        
    int t=A[index];
    A[index]=A[temp];
    A[temp]=t;
    
}
void ssort(int A[], int l)
{for(int i=0;i<l;++i)
   swap_max(A,l,i);
  }
