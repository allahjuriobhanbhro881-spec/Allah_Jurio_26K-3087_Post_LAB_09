#include <stdio.h>

int main(){

    int balance[5] = {15000,25000,18000,32000,12000};

    int *p = &balance[1];

    printf("\nValue: %d", *p);
    printf("\nAddress: %p", p);

    *p = 10000;

    printf("\nupdated Value: %d", *p);
   


    return 0;
}