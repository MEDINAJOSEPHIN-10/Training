#include<stdio.h>

int main(){
	int score;
	char grade;
	printf("enter score and grade(A,B,C,D)\n");
	scanf("%d",&score);
	scanf(" %c",&grade);

	printf("your scote is %d and grade is %c\n",score,grade);
	return 0;

}
