#include<stdio.h>
#include<string.h>
#define MAX 50
int main(){
	char str[MAX];
	char temp;
	int i,j;
	printf("Enter the string:");
	fgets(str,MAX,stdin);
	int n=strlen(str);
	if(str[n]=='\n'){
		str[n]='\0';
	}
	
	printf("%d\n",n);
	
	char rev[MAX];
	//reversing the string
	for(i=0;i<n;i++){
		rev[i]=str[n-1-i];
	}

	printf("the reversed string is:%s\n",rev);
	printf("The string:%s\n",str);
	for(int i=0;i<n;i++){
	if(str[i] != rev[i]){
		printf("Its not a palindrome\n");
		return 0;
	}
	}

	printf("Its palindrome\n");
	return 0;
}
