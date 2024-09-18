#include<stdio.h>
#include<string.h>
#define MAX 50
int main(){
	char ch[MAX];

	printf("Enter the string:");
	fgets(ch,MAX,stdin);
//	int len=strlen(ch);
//	if(ch[len-1]=='\n')
//		ch[len-1]='\0';
	printf("the input strings:%s\n",ch);
	return 0;
}

