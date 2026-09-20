/*
Author:Ryan Munene
Registration Number:BCS-05-0539/2026
Description:User Input
Date:17/09/2026
Version 1 
*/

#include <stdio.h>

int main() {
	float height; //%f
	double bank_balance; //%lf
	char phone[20] ; //%s(because 0 is not an integer)
	
	printf("Enter your height in cm: \t");//prompts user to input height
	scanf("%f", &height);
	
	printf("Enter your Bank Balance in Ksh: \t");//prompts user to input bank balance
	scanf("%lf", &bank_balance);
	
	printf("Enter your Phone number: \t");//prompt user to inptu phone number
	scanf("%s", &phone);
	
	printf("Height: %.1f \n", height);
	printf("Bank Balance: %.2lf \n", bank_balance);
	printf("Phone Number: is %s \n", phone);

	return 0;
}
