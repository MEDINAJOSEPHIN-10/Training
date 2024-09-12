#include<stdio.h>

int main(){
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter an array:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)	
		printf("%d",arr[i]);
	return 0;
}

