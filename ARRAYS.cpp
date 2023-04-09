#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i;
    int a[5]={34,8,7,5};
    a[4]=4;
    cout<<a[0]<<endl;     // endl for new line //c-out for print //c-in for input taking
    for(i=0;i<5;i++)
    //cout<<a[i]<<endl;   //print statement in cpp//
    printf("%d\n", a[i]);

    int b[5]={9,8,7,6,5};
    for(int x:b)
    {
        cout<<x<<endl;
    }

} 
