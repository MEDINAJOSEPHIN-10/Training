#include<stdio.h>

int main(){
	float height;
	int weight;
	printf("Enter your height:");
	scanf("%f",&height);
	printf("Enter your weight:");
	scanf("%d",&weight);
	float bmi=weight/(height*height);
	printf("Your BMI Is: %f\n",bmi);
	return 0;
}

