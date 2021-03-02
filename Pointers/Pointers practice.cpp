#include <stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    
    // Create an array in heap memory
    int *p;
    p=(int *)malloc(5*sizeof(int));
    
    p[0]=10;p[1]=15;p[2]=14;p[3]=21;p[4]=31;
    
    for(int i=0;i<5;i++){
        // printf("%d\n",A[i]);
        printf("%d\n",p[i]);
    }
    
    // Delete the dynamically memory
    free(p)
    // delete [] // C++
    
    // int A[5]={2,4,6,8,10};
    // int *p;
    // // You don't need & when you are pointing to an array
    // p=A;
    
    // for(int i=0;i<5;i++){
    //     // printf("%d\n",A[i]);
    //     printf("%d\n",p[i]);
    // }
    
    // int a = 10;
    // int *p;
    // p=&a;
    
    // printf("using pointer %d %d",p,&a);
    // printf("using pointer %d",*p);

    return 0;
}
