#include<stdio.h>

int main(){
	float height;
	int weight;
	printf("Enter your height:");
	scanf("%f",&height);
	printf("Enter your weight:");
	scanf("%d",&weight);
	float bmi=weight/(height*height);
	printf("your bmi is %f\n",bmi);
	if(bmi<18.5)
		printf("Your underweight\n");
	else if(bmi>=18.5 && bmi<=24.9)
		printf("Your normalweight\n");
	else if(bmi>=25 && bmi<=29.9)
		printf("Your over weight\n");
	else if(bmi>=30)
		printf("your obseity\n");
	return 0;
}
