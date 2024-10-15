#include<stdio.h>
#include<string.h>
#define MAX 50

int main(){
	char str[MAX];

	int i,j;
	printf("Enter the string:");
	fgets(str,MAX,stdin);
	int n=strlen(str);
	if(str[n-1]=='\n'){
		str[n-1]='\0';
		n--;
	}
	
//	printf("%d\n",n);
	
	char rev[MAX];
	//reversing the string
	for(i=0;i<n;i++){
		rev[i]=str[n-1-i];
	}

	printf("the reversed string is:%s\n",rev);
	printf("The string:%s\n",str);
	if(strcmp(str,rev)==0){
		printf("Palindrome\n");
		}
	else{
		printf("Not palindrome\n");
	}

	return 0;
}
