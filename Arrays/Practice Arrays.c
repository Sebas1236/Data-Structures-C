#include <stdio.h>

int main()
{
    int n;
    
    int A[10] ={2,4,6,8,10,12};
    
    for(int i=0;i<10;i++){
        printf("%lu\n",A[i]);
    }
    
    printf("%lu",sizeof(A));

    return 0;
}
