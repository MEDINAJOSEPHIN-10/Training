#include<stdio.h>

int main(){
	int mark;
	printf("Enter the score for 100:");
	scanf("%d",&mark);
	if(mark>=90 && mark<=100)
		printf("Your grade is A\n");
	else if(mark>=80 && mark<=89)
		printf("Your grade is B\n");
	else if(mark>=70 && mark<=79)
		printf("Your grade is C\n");
	else if(mark>=60 && mark<=69)
		printf("Your grade is D\n");
	else if(mark<60)
		printf("Your grade is F\n");
	else
		printf("Enter the correct score");

	return 0;
}

	
