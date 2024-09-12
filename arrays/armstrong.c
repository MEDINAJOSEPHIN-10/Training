#include<stdio.h>
#include<math.h>
int main(){
	int num;
	int sum=0;
	int count=0;
	int tmp;	
	printf("Enter the integer:");
	scanf("%d",&num);
	tmp=num;
	int tmp1=num;
	while(num!=0){
		num=num/10;
		count++;
	}
	printf("The count of the number is:%d\n",count);

	while(tmp!=0){
		sum=sum+pow((tmp%10),count);
		tmp=tmp/10;
	}
	printf("The sum of the square number:%d\n",sum);

	if(tmp1==sum)
		printf("Its armstrong number\n");
	else
		printf("Its not an armstrong number\n");
	return 0;
}
