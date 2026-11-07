#include <stdio.h>
void calculateTotal(int *p, int size){

        int total = 0;

        for(int j=0;j<size;j++){
           printf("\nValue: %d ", *(p+j));
           printf("\nAddress: %p ", (p+j));
           total = total + *(p+j);
        }
        printf("\n");
        printf("\nTotal: branch: %d", total);
     }

int main(){

    int branch1[] = {15000, 23000, 32000};
    int branch2[] = {12000, 21000, 27000, 35000};

    int *p[] = {branch1,branch2};
    int n=3; 

    for(int i=0;i<2;i++){
        calculateTotal(p[i],n);
        n=4;
    }

    return 0;
}