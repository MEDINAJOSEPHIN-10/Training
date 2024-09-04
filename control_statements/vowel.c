#include<stdio.h>

int main(){
	char a;
	printf("Enter the character:");
	scanf("%c",&a);
	switch(a)
	{
		case 'a': printf("Its vowel\n");
		break;
		case 'e': printf("Its vowel\n");
		break;
		case 'i': printf("Its vowel\n");
		break;
		case 'o': printf("Its vowel\n");
		break;
		case 'u': printf("Its vowel\n");
		break;
		default: printf("It's consonant\n");
		break;
	}
	return 0;
	}
