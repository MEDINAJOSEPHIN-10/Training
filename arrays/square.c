#include<stdio.h>
#include<math.h>
#define MAX 9999999
int main(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	if(num < MAX && num>0){
		float sqr=(float)sqrt(num);
		int rounding=(int)round(sqr);
		printf("The Closest square number is:%d\n",rounding*rounding);
		
	}
	return 0;
	}
