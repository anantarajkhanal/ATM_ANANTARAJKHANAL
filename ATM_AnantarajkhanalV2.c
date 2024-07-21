#include<stdio.h>
#include <stdbool.h> 
int pincode = 5633 , pincodeinput, error_check =1, balance=320000 , withdrawportal , withdraw , deposit , withdrawpoint_goback ;
int back_exit_orstart , balanceen;
bool block(bool);
int balanceenfun(int);
int depositfunc(int);
int input(int);

int main(){


printf("*******************************\n");
printf("card recognized\n");
printf("enter a pincode\n");
scanf("%d", &pincodeinput);
    nowithdrawpoint:

if(pincodeinput==pincode){
    printf("you have entered the correct code\n");
    printf("A. enter 1 for balance enquiry\n");
    printf("B. enter 2 to deposit money \n");
    printf("C. enter 3 for account enquiry\n");
    scanf(" %d" , &balanceen);

    switch (balanceen){
    case 1:
    printf("your balance is %d\n" , balance);
    printf("press 1 to withdraw your amount \nany other number to go back\n");
    scanf("%d",&withdraw);

    if(withdraw == 1){
        amountwithdrawpoint:
        printf("enter the amount you want to withdraw\n");
        inquiryfunc(balance);
        printf("%d is your new balance\n",balance);
        printf("type 1 to go back and any other number to exit\n");
        scanf("%d", &withdrawpoint_goback);

        if(withdrawpoint_goback == 1){
            goto nowithdrawpoint;
        }else{
            printf("insufficent balance or withdrawl was in negative number\n");
            goto amountwithdrawpoint;
        }                  
    }else{
        goto nowithdrawpoint;}
    

    case 2 :
    deposit:
    printf(" you have %d total balance \n enter the amount of money you want to deposit\n", balance);
    depositfunc(balance);
    printf("you just deposited %d total balance now is %d\n", deposit , balance);
    printf("press 1 to exit and anything to go to the start\n");
    scanf("%d", &back_exit_orstart);
    if(back_exit_orstart==1){
        break;
   
    }else{
       goto nowithdrawpoint;
    }
    
	case 3:
		printf("Name : Ram Prasad\n phone number:9888888888 \n");
        goto nowithdrawpoint;

    }
}else{
    if(block(error_check)==true){
        printf("your attempt is blocked for today\n");       
    }else{
    error_check++;
    printf("\n try again");
    goto nowithdrawpoint;
    }
}
   

 
 return 0;
 }

 
int inquiryfunc(int a){
  
        scanf("%d",&withdraw);
        if(withdraw<balance&&0<withdraw){
        balance = balance-withdraw;}
        return balance;

    }

int depositfunc(int a){
        scanf("%d", &deposit);
    balance = balance + deposit;
    return balance;
    }
    
 
 
bool block(bool torf){
   if(error_check == 3){
        return true;
    }else{
    return false;
    }
}

int input(int a){
    scanf("%d" , &a);
    return a;
}