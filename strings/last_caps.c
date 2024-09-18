#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 50

int main(){
	char ch[MAX];
	//int n;
	printf("Enter the string:");
	fgets(ch,MAX,stdin);
	if(ch[strlen(ch)-1] == '\n')
		ch[strlen(ch)-1] = '\0';
	int n=strlen(ch);
//	printf("%d",n);
//	while (ch[n] != '\0') {
  //      n++;
   // }
	if(n>0){
		ch[n-1]= toupper(ch[n-1]);
	}

	printf("The moderated String is:%s\n",ch);

	return 0;

}
			

