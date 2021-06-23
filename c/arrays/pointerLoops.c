#include <stdio.h>

int main()
{
    int numbers[ ] = {1,2,3,4,5,6,7,8,9,10};
    int *p = numbers;   
    for(int i=0; i<10; i++){
        printf("%d\n", *(p+i));
    };
    return 0;
}