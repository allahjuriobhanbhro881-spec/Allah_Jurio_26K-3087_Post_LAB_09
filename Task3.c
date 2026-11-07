#include <stdio.h>

int main(){


    int branch1[] = {15000, 23000, 32000};
    int branch2[] = {12000, 21000, 27000, 35000};

    int *p[] = {branch1,branch2};
    int n=3; // for handling both branch's accounts
    
    for(int i=0;i<2;i++){
        int total = 0;
        for(int j=0;j<n;j++){
           printf("\nValue: %d ", *(p[i]+j));
           printf("\nAddress: %p ", (p[i]+j));
           total = total + *(p[i]+j);
        }
        printf("\n");
        printf("\nTotal: branch:%d %d", i+1, total);
        n=4;
    }

    return 0;
}