#include<stdio.h>

int main(){
	int n;
	int sum=0;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int expected_sum=n*(n+1)/2;
	int arr[n];
	printf("Enter the elements of an array till %d : ",n-1);
	for(int i=0;i<n-1;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}


	int missing=expected_sum-sum;

	printf("%d",missing);

	return 0;
}
