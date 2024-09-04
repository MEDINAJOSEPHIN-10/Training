#include<stdio.h>

int main(){
	int a;
	printf("Enter the numbers:\n");
	scanf("%d",&a);
	if(a % 2 == 0)
		printf("the numbers %d is even\n",a);
	else
		printf("The Number %d is Odd\n",a);
	return 0;
}
