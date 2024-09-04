#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
    int	max=(a>b)?((a>c)?a:c):((b>a)?b:c);
	printf("Maximum of three %d,%d and %d is %d\n",a,b,c,max);
	return 0;
	
}
