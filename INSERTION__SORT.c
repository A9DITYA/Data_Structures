#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)//the swap function//
{
    int temp=*x;
    *x=*y;
    *y=temp;
}




void Insertion(int A[],int n)
{

        int i,j,x;

        for(i=1;i<n;i++)
        {
            j=i-1;
            x=A[i];
            while(j>-1 && A[j]>x)
            {
                A[j+1]=A[j];
                j--;
            }
            A[j+1]=x;
        }

    
    
}


int main()
{
    int A[]={7,9,17,8,44,12,4,11,2,3}, n=10,i;
    
    Insertion(A,n);

    for(i=0;i<10;i++)
    {
        printf("%d", A[i]);
        printf("\n");
    }
    

    return 0;
  
}