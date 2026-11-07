#include <stdio.h>

int deposit(int n1, int n2);  
int withdraw(int n1, int n2);

int main(){

    int current_balance = 25000;

    int (*ptr)(int, int);

    ptr = deposit;
    int deposit_amount = 5000;

    current_balance = ptr(current_balance, deposit_amount);
    printf("Deposited: %d\n", deposit_amount);
    printf("Updated Balance: %d\n\n", current_balance);

    ptr = withdraw;
    int withdraw_amount = 10000;

    current_balance = ptr(current_balance,withdraw_amount);
     printf("WithDarwed Amount: %d\n", withdraw_amount);
    printf("Updated Balance: %d\n\n", current_balance);
    

    return 0;
}

int deposit(int n1, int n2){
    return n1+n2;
}
int withdraw(int n1, int n2){
    return n1-n2;
}
