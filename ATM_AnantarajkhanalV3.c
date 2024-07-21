#include<stdio.h>
#include <stdbool.h> 
int pincode = 5633 , pincodeinput, error_check =0, balance=320000 , withdrawportal , withdraw , deposit , withdrawpoint_goback ;
int back_exit_orstart , balanceen , i = 1;
double exitstore;
int block(bool);
void balanceenfun();
void depositfunc();
void withdrawfunc();
void end();


int main(){

printf("\n*******************************\n");
printf("card recognized\n");
errorpoint:
printf("\n*******************************\n");
printf("enter a pincode\n");
scanf("%d", &pincodeinput);

 
if(pincodeinput==pincode){
    while(i == 1){
    printf("you have entered the correct code\n");
    printf("A. enter 1 for balance enquiry\n");
    printf("B. enter 2 to deposit money \n");
    printf("C. enter 3 for account enquiry\n");
    printf("D. enter 4 to withdraw your money\n");
    scanf(" %d" , &balanceen);

    switch (balanceen){
    case 1:
   inquiryfunc();
   end();
    break;

    case 2 :
   depositfunc();
   end();
    break;
   
    case 3:
		printf("\nName : Ram Prasad\n phone number:9888888888 \n");
        end();
        break;

    case 4:
    withdrawfunc();
    end();
    break;

    default:
    printf("\noption not found\n");
    end();

    }
    }
    
}else{
    error_check++;
    if(block(error_check)==true){
        printf("your attempt is blocked for today\n");       
    }else{
    printf("\n try again\n");
    goto errorpoint;
    }
    } 
 

 
 return 0;
 }


void inquiryfunc(){
    printf("your balance is %d\n" , balance);
    }

void depositfunc(){
    
    printf(" you have %d total balance \n enter the amount of money you want to deposit\n", balance);
    scanf("%d", &deposit);
    balance = balance + deposit;
    printf("you just deposited %d total balance now is %d\n", deposit , balance);
   
}
    
void withdrawfunc(){
    printf("enter the amount you want to withdraw\n");
    scanf("%d",&withdraw);
    if(withdraw<balance&&0<withdraw){
        balance = balance-withdraw;
        printf("%d is your new balance\n",balance);  }        
    else{
        printf("insufficent balance");
        }

}
 
int block(bool a){
   if(error_check == 3){
        return true;
    }else{
    return false;
    }
}

void end(){
    printf("\nenter any other number to go back\nenter 1 to exit\n");
    scanf("%lf",&exitstore);
     
       if(exitstore==1){
        i++;
    }
}

