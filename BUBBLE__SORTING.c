#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)//the swap function//
{
    int temp=*x;
    *x=*y;
    *y=temp;
}


void Bubble(int A[],int n)// function for the bubble//
{
    int i,j,flag=0;;

    for(i=0;i<n-1;i++)// it proceeds for the passes i,e (n-1) passes//
    {
        for(j=0;j<n-i-1;j++) //it proceeds for the elements in the passes // 
        {
            if(A[j]>A[j+1]) //compare the element of column and proceed for the next pass//
            {
            swap(&A[j],&A[j+1]);//if the condition is true then swap --- so flag==1//
            flag==1;
            }

        }if(flag==0) 
        break;
    }
    
}

int main()
{
    int A[]={7,9,17,8,44,12,4,11,2,3}, n=10,i;
    Bubble(A,n);

    for(i=0;i<10;i++)
    {
        printf("%d", A[i]);
        printf("\n");
    }
    

    return 0;
  
}