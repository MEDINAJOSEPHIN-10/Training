// C program to illustrate strings
 
#include <stdio.h>
#include <string.h>
 
int main()
{
	// declare and initialize string
	char str[] = "Geeks lo lo";
 
	// print string
	printf("%s\n", str);
 
	int length = 0;
	for(int i=0;str[i]!='\0';i++){
	    if(str[i] != ' '){
	        length++;
	    }
	}
 
	// displaying the length of string
	    printf("Length of string str is %d", length);
 
	return 0;
}
