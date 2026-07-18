#include <stdio.h>

void checkBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    int choice;
    double balance = 0.0;

    printf("{WELCOME TO THE BANK}\n");

    do{
        printf("\nselect an option:\n");
        printf("\n1. check your balance\n");
        printf("2. deposit money\n");
        printf("3. withdraw money\n");
        printf("4. Exit\n");
        printf("enter your choice : ");
        scanf("%d", &choice);

       switch(choice){
           case 1:
           checkBalance(balance);
           break;
           case 2:
           balance += deposit();
           break;
           case 3:
           balance -= withdraw(balance);
           break;
           case 4:
           printf("\nthank you for using the bank\n");
           break;
           default:
           printf("\ninvalid choice please choose 1 - 4\n");
           
       }
    }while(choice != 4);
}

void checkBalance(double balance){
    printf("\nyour balance is : %.2lfdh\n", balance);
}
double deposit(){
    double amount;
    printf("\nenter the amount of money you want to deposit : ");
    scanf("%lf", &amount);
    if(amount < 20){
        printf("\nyou can't deposit less than 20dh\n");
        return 0.0;
    }
    else{
        printf("\nthe amount %.2lfdh has been deposited successfully you can check your balance\n", amount);
        return amount;
    }
}
double withdraw(double balance){
    double amount2;
    printf("\nenter the amount of money you want to withdraw : ");
    scanf("%lf", &amount2);
    if(amount2 >= balance){
        printf("\nwe are sorry but you can't withdraw more than your balance\n");
        return 0.0;
    
    }
    else{
       
        printf("\nyou withdrew %.2lfdh you can check your balance\n", amount2);
        return amount2;
    }
}
