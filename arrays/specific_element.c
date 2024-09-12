#include<stdio.h>

int main(){
	int i,n,s;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array of %d elements",n);
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&s);
	if(arr[n]=s){
		printf("%d",n);
	}

	return 0;
	}
