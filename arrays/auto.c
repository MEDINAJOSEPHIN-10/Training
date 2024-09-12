#include<stdio.h>
#include<math.h>
int main(){
	int num;
	int sum1=0;
	int count=0;
	int count1=0;
	int tmp;

	printf("Enter the number:\n");
	scanf("%d",&num);
	tmp=num;
	int sqr=num*num;
	printf("Squareroot is:%d\n",sqr);
	while(num!=0)
	{
		num=num/10;
		count++;

	}
	printf("count of digit is %d\n",count);
	/*while(sqr!=0){
	    int n=pow(10,count);
		sum1=sqr%n;
	
	}*/
	int n=pow(10,count);
	int res=sqr%n;
	printf("The count of squareroot of last to digit number is:%d\n",res);
	
	if(tmp==res)
		printf("Its automorphic\n");
	else
		printf("Its not an automorphic/n");
	return 0;
	}

