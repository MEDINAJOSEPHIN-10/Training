#include<stdio.h>

int main(){
	int a;
	int b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
    int  max=(a>=b)? a:b;
	printf("Maximum Numbers of %d and %d is %d\n",a,b,max);
	return 0;
}
