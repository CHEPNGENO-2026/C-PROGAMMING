//Program to display student's eligibility for exams
/*
Name:Bett Chepngeno
Reg No:BCS-03-0065/2026
Version 1
*/
#include <stdio.h>

int main(){
	float Attendance,AverageMarks;
	printf("Enter the percentage class Attendance: ");
	scanf("%f", &AverageMarks);
	
	printf("Enter the AverageMarks: ");
	scanf("%f", &AverageMarks);
	
	if (Attendance >=75 && AverageMarks >= 40){
		printf("Eligible");
	}
	else{
		printf("Eligible");
	}
	return 0;
}