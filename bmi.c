#include<stdio.h>
int main()
{
	float height = 170;
	float weight = 70;
	float bmi = 0;
	height = height * 0.01; 
	bmi = weight / (height * height);
	printf("당신의 BMI : %0.2f\n", bmi);
	return 0;
}