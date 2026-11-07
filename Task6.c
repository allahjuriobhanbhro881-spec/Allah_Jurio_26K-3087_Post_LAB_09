#include <stdio.h>

int deposit(int balance, int amount) {
    return balance+amount;
}
int withdraw(int balance, int amount) {
    return balance - amount;
}

int processTransaction(int balance, int amount, int (*operation)(int, int)) {
    return operation(balance, amount);
}

int main() {
    int current_balance = 30000; // Starting account balance

   
    printf("\ninitial account balance: %d\n", current_balance);
   
int deposit_amount = 7000;
    
    current_balance = processTransaction(current_balance, deposit_amount, deposit);
    
    printf("deposited: %d\n", deposit_amount);
    printf("updated balance: %d\n\n", current_balance);

    
    int withdraw_amount = 12000;
    current_balance = processTransaction(current_balance, withdraw_amount, withdraw);
    
    printf("withdrew: %d\n", withdraw_amount);
    printf("updated Balance: %d\n", current_balance);

    return 0;
}