#include <stdio.h>

void main()
{
    int num = 7;
    int *pointer_p;
    pointer_p = &num;


    printf("address of num: %x \n", &num);
    printf("value of pointer_p: %x \n", *pointer_p);

}



