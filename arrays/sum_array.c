#include<stdio.h>

int main(){
	int n,i;
	int sum=0;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements %d in array:",n);
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++){
		sum=sum+arr[i];
		}
	printf("The sum is:%d\n",sum);
	int average=sum/n;
	printf("The average of element is:%d\n",average);

	return 0;
	}
