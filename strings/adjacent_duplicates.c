/*#include<stdio.h>
#include<string.h>
#define MAX 50
int main(){
	char ch[MAX];
	printf("Enter the string:");
	fgets(ch,MAX,stdin);
	if(ch[strlen(ch)-1]=='\n')
		ch[strlen(ch)-1]='\0';
	int n=strlen(ch);
	for(int i=0;i<n;i++){
		if(ch[i] ==ch[i+1]){
			ch[i++]=ch[i]; 
		}
	}
	printf("%s\n",ch);
	return 0;
}
*/
#include <stdio.h>
#include <string.h>
#define MAX 50
int main() {
	char ch[MAX];
	printf("Enter the String:");
	fgets(ch,MAX,stdin);
	if(ch[strlen(ch)-1]=='\n')
		ch[strlen(ch)-1]='\0';
    char sb[MAX];  // Temporary buffer to build the new string
    int n, k;

    while (1) {
        n = strlen(ch);
        k = 0;  // Index for the new string

        for (int i = 0; i < n; i++) {
            int repeated = 0;

            // Check for adjacent duplicates
            while (i + 1 < n && ch[i] == ch[i + 1]) {
                repeated = 1;
                i++;
            }

            // Add non-repeated characters to the new string
            if (!repeated) {
                sb[k++] = ch[i];
            }
        }

        sb[k] = '\0';  // Null-terminate the new string

        // If no changes were made, break the loop
        if (strlen(sb) == n) {
            break;
        }

        // Copy the new string back to s for the next iteration
        strcpy(ch, sb);
    }

    printf("%s\n", ch);

    return 0;
}

