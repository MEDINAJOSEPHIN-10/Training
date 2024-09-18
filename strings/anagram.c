#include<stdio.h>
#include<string.h>
#define MAX 50

int main(){
	char str[MAX];
	char temp;

	printf("Enter the String1 :");
	fgets(str,MAX,stdin);
	int n=strlen(str);
	if(str[n]=='\n')
		str[n]='\0';
//	printf("%s\n",str);

	char str2[MAX];
	printf("Enter the String 2:");
	fgets(str2,MAX,stdin);
	int n2=strlen(str2);
	if(str2[n2]=='\n')
		str2[n2]='\0';
//	printf("%s\n",str2);

	if(n != n2){
		printf("Its not an anagram\n");
		return 0;
	}
	//sort the first string
	for(int i = 0; i < n-1; i++) {
      for (int j = i+1; j < n; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }
//	printf("%s\n",str);

	//sort the second array
	for(int i = 0;i<n-1; i++){
		for(int j = i+1; j < n;j++){
			if(str2[i]>str2[j]){
				temp = str2[i];
				str2[i]=str2[j];
				str2[j]=temp;
			}
		}
	}
//compare the two strings

	for(int i=0;i<n;i++){
		if(str[i] !=str2[i]){
			printf("Its not an anagram\n");
			return 0;
		}
	}

	printf("Its anagram\n");
	return 0;
	
}
