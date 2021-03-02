#include <stdio.h>
#include<iostream>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
  char x;
}; //r1,r2,r3; global variable

// struct Rectangle r1,r2,r3;

int main()
{
    struct Rectangle r1={10,5};
    
    r1.length = 15;
    r1.breadth = 7;
    
    printf("%d\n", r1.length);
    printf("%d", r1.breadth);

    return 0;
}

