#include <stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};


int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    printf("%d",p1);
    printf("%d",p2);
    printf("%d",p3);
    printf("%d",p4);
    printf("%d",p5);
    
    // Pointers take the same amount of memory: 8 bytes


    return 0;
}
