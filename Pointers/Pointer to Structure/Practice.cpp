
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Object of rectangle in heap
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length=15;
    p->breadth=7;
    
    printf("%d\n", p->length);
    printf("%d", p->breadth);
    
    
    // struct Rectangle r={10,5};
    // printf("%d\n", r.length);
    // printf("%d\n", r.breadth);
    
    // struct Rectangle *p = &r;
    // printf("%d\n", p->length);
    // printf("%d", p->breadth);

    return 0;
}
