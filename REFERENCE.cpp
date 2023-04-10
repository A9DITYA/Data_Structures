#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
//refrencing is used in parameter passing also in small function//

int main()
{
    int a=65;
    int &r=a; 
    a=98;     // it is used for only refrencing (it will not take the value) in cpp/c++ only.
    
    cout<<a<<endl<<r<<endl; // it is the syntax in c++//
    //printf("%d", r); // it is the syntax in C//
    return 0;
}