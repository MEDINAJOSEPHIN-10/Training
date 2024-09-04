#include<stdio.h>

int main(){
	int a;
	int b;
	int op;
	printf("Enter two integer:");
	scanf("%d %d",&a,&b);
	printf("Enter your choice:\n");
	printf("1.Addition \n 2.Subraction \n 3.Multiplication \n 4.Division\n");
	scanf("%d",&op);
	switch(op){
		case 1: printf("Addition of %d and %d:%d\n",a,b,a+b);
		break;
		case 2: printf("Subtraction of %d and %d:%d\n",a,b,a-b);
		break;
		case 3: printf("Multiplication of %d and %d:%d\n",a,b,a*b);
		break;
		case 4: printf("Division of %d and %d:%d\n",a,b,a/b);
		break;
		default: printf("Enter the correct choice\n");
		break;
		}
	return 0;
	}

