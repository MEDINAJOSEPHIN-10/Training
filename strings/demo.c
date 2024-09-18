#include <stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100];
    int i, j, temp, length1 = 0, length2 = 0;

    // Input strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate length of both strings
    //while (str1[length1] != '\0' && str1[length1] != '\n') length1++;
    //while (str2[length2] != '\0' && str2[length2] != '\n') length2++;
	length1=strlen(str1);
	length2=strlen(str2);
    // Remove trailing newline characters if present
    if (str1[length1] == '\n') str1[length1] = '\0';
    if (str2[length2] == '\n') str2[length2] = '\0';

    // Check if lengths are different
    if (length1 != length2) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Sort the first string using bubble sort
    for (i = 0; i < length1 - 1; i++) {
        for (j = 0; j < length1 - i - 1; j++) {
            if (str1[j] > str1[j + 1]) {
                temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
        }
    }

    // Sort the second string using bubble sort
    for (i = 0; i < length2 - 1; i++) {
        for (j = 0; j < length2 - i - 1; j++) {
            if (str2[j] > str2[j + 1]) {
                temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

    // Compare the sorted strings
    for (i = 0; i < length1; i++) {
        if (str1[i] != str2[i]) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}

