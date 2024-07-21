#include<stdio.h>
int main(){
int pincode = 5633 , pincodeinput, error_check =1 ,optionafterpin, balance=320000 , withdrawportal , withdraw , deposit , withdrawpoint_goback ;
char back_exit_orstart , balanceen;
retrypoint:
printf("*******************************\n");
printf("card recognized\n");
printf("enter a pincode\n");
scanf("%d", &pincodeinput);
    nowithdrawpoint:
if(pincodeinput==pincode){

    printf("you have entered the correct code\n");
    printf("1. enter x for balance enquiry\n");
    printf("2. enter y to deposit money \n");
    printf("3. enter z for account enquiry\n");
    
    scanf(" %c" , &balanceen);
    
    switch (balanceen){
    case 'x':
    printf("your balance is %d\n" , balance);
    printf("press 1 to withdraw your amount \nany other number to go back\n");
    scanf("%d",&withdraw);
    if(withdraw == 1){
        amountwithdrawpoint:
        printf("enter the amount you want to withdraw\n");
        scanf("%d",&withdraw);
        if(withdraw<balance&&0<withdraw){
        balance = balance-withdraw;
        printf("%d is your new balance\n",balance);
        printf("type 1 to go back and any other number to exit\n");
        scanf("%d", withdrawpoint_goback);
        if(withdrawpoint_goback == 1){
            
            goto nowithdrawpoint;
          


        }else{break;}
        }else{
            printf("insufficent balance or withdrawl was in negative number\n");
            goto amountwithdrawpoint;
        }

        
    }else{
        goto nowithdrawpoint;
    }

    case 'y':
    deposit:
    printf(" you have %d total balance \n enter the amount of money you want to deposit\n", balance);
    scanf("%d", &deposit);
    balance = balance + deposit;
    printf("you just deposited %d total balance now is %d", deposit , balance);
    printf("press A to exit and anything to go to the start");
    scanf("%d", &back_exit_orstart);
    if(back_exit_orstart=='A'){
        break;
   
    }else{
       goto retrypoint;
    }
    
	case'z':
		printf("Name : Ram Prasad\n phone number:9888888888 \n");


    }

    


}else{
    printf("try again");
    if(error_check==3){
        printf("your attempt is blocked for today\n");
        
    }else{
    error_check++;
    goto retrypoint;
    }

}







 
 return 0;
}
