#include <stdio.h>

int main(){

    
    
    int trans[2][3] = {
                        {120000, 150000,180000}, 
                        {200000, 170000, 220000}
                        };

    int (*p)[3] = trans;
    
    
    for(int i=0;i<2;i++){
        int total = 0;
        for(int j=0;j<3;j++){
            printf("\nValue: (%d,%d) %d",i,j, *(p+i)[j]);
            printf("\nAddress: (%d,%d) %p",i,j, (p+i)[j]);
            total = total + *(p+i)[j];
        }
        printf("\ntotal transaction: branch: %d, %d",i+1,total);
    }


    return 0;
}