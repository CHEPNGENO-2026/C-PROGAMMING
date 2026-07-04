/*
Description: ATM withdrawal program
Name:Bett Chepngeno
Reg No:	BCS-03-0065/2026
version 1
*/

#include<stdio.h>

int main(){
	float balance, withdrawal_amount;
	
	printf("Enter your current balance: ");
	scanf("%f", &balance);
	
	while(balance >0){
		printf("Enter the amount to withdrawal: ");
		scanf("%f", &withdrawal_amount);
		 
		balance -= withdrawal_amount;
		printf("withdrawal succesful.");
	Remaining balance:"%.2f\n",balance);
	}
	printf("Your balance is zero. 	No more withdrawals can be made.\n");
	return 0;
}
     
