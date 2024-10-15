#include<stdio.h>

int main(){
	int n;
	int count=0;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int match=n/2;
	for(int i=0;i<match;i++){
		for(int j=n-1;j<match;j--){
			if(arr[i]==arr[j]){
				count++;
			}
		}
	}
	
	if(match==count){
		printf("Its palindromr");
	}
	else{
		printf("Its not");
	}

	return 0;

}

