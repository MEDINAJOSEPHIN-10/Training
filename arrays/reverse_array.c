#include<stdio.h>

int main(){
	int n;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of %d array",n);
	for(int i=1;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=n-1;i!=0;i--){
		printf("%d",arr[i]);
	}
	/*
	int arr2[n];
	printf("The reversed array is");
	for(int i=1;i<n;i++){
		printf("%d",arr2[i]);
	}*/
	return 0;
	}
