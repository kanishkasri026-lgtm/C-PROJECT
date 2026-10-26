#include<stdio.h>
int main()
{
int pin = 1234;
int enteredpin;
int choice;
float balance=1000;
float deposit, withdraw;
printf("Enter your pin: ");
scanf("%d, &enteredpin");
if (enteredpin==pin)
{
printf("Login successful\n");
}
else
{
printf("Invalid pin");
return 0;
}
do
{
printf("\n=====ATM MENU=====\n");
printf("Balance enquire\n");
printf("deposit\n");
printf("Withdraw\n");
printf("Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch (choice)
{
case 1: printf("Balance available :%f",balance); break;
case 2: printf("Enter your deposit amount :", deposit);
	scanf("%f", &deposit);
	balance+=deposit;
	printf("Deposit successful\n");
	printf("Thankyou\n");
	break;
case 3: if (withdraw > balance);
	   printf("Insufficient fund\n:");
	else
	{
	  printf("Enter your withdrawal amount:",withdrawal);
	  scanf("%f", &withdraw); balance-=withdraw;
	  printf("Withdraw successful\n");
	  printf("Thankyou");
	}
	break;
case 4: printf("Thankyou");
default:
	printf("Invalid choice\n");
}
}while(choice!=4);
return 0;
}


