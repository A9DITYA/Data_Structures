#include<iostream>
#include<stdio.h>
#include<stdlib.h> //malloc
using namespace std;
//IN POINTER 
int main(){
    int a=78; /*b=56 , c=-67;*/
    int *p;
    /*int *i;
    int *o;*/
    
    
    p=&a;
    //i=&b;
    //o=&c;
    //printf("%d\n", &a);
   //printf("%d\n", *p);
    /*printf("%d\n", *i);
    printf("%d\n", *o);*/

    //p=new int[5]; // storing this in directly in the heap// c++ syntax//

    cout<<a<<endl;
    printf("using pointer %d\n, %d\n",p,&a);

    //POINTER TO THE ARRAY//
    int d[5]={2,4,6,8,10};
    int *D;
    D=d;
    for(int i=0;i<5;i++){

        cout<<D[i]<<endl;}

    //IN HEAP//
    int *x;
    //x=(int *)malloc(5*sizeof(int));//           In C

    x=new int[5];//                               In C++/Cpp

    x[0]=34; x[1]=45; x[2]=56; x[3]=78; x[4]=89; x[5]=0;

    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<endl;
    }   delete[ ]x; //released memory after using it// in c++
        //free(x);    //"""""""" in C

        return 0;
}