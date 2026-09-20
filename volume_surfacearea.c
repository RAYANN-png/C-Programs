/*
Author:Ryan Munene
Reg No.:BCS-05-0539/2026
Description:Entering data on Surface Area and Radius
Date:21/09/2026
Version 1
*/

#include <stdio.h>
#define PI 3.142

int main(){
	float radius;
	float height; 
	float volume;
	float surface_area;
	
	printf("Enter the radius: \t");
	scanf("%f", &radius);
	
	printf("Enter the Height: \t");
	scanf("%f", &height);
	
	volume = PI * radius * radius * height;
	surface_area = 2 * PI * radius * radius;
	
	printf("The volume of the cylinder is %.2f\n", volume);
	printf("The surface area of the cylinder is %.2f\n", surface_area);
	
	return 0;
	
}
