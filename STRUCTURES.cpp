#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle

{
   int length;
   int breadth;

};//can also initialise here
// we can also initialise here(globally)

int main(){
    struct rectangle r1={90,56};
    r1.length=15;
    r1.breadth=10;

    cout<<sizeof(r1)<<endl;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    cout<<r1.length*r1.breadth<<endl;

    return 0;


}
