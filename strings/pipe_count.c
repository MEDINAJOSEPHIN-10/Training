#include<stdio.h>
#include<string.h>
#define MAX 100
int main()
{
	char str[MAX];
	printf("Enter the string with pipe:");
	fgets(str,MAX,stdin);
	char* token;
	token=strtok(str,"|");
	while(token){
		printf("The tokenized strng is:%s\n",token);
		token=strtok(NULL,"|");
		}
	printf("%s",token);
	while(token){
		int token,heig
	return 0;
}
