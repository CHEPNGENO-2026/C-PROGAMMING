//Program to display  the water bill
/*
Name:Bett Chepngeno
Reg No:BCS-03-0065/2026
Version 1
*/
#include <stdio.h>

int main(){
	float units, totalbill;
	printf("Enter the number of units consumed: ");
	scanf("%", &units);
	
	if (units >60){
		totalbill=units * 30;
	}
	else if(units >= 31 &&units <= 60){
		totalbill = units *25;
	}
	else if(units >= 0 && units <= 30){
		totalbill = units *20;
	}
	else{
		printf("Invalid entry please try again.");
		return 1;
	}
	printf("Total water bill: %.2f Kes", totalbill);
	
	return 0;
}