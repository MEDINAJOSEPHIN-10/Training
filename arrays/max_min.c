#include<stdio.h>

int main(){
	int n,i;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	int max;
	int min;
//	int max=arr[0];
//	int min=arr[0];
	printf("Enter the %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++){
			if(arr[i]>max)
				max=arr[i];
			if(arr[i]<min)
				min=arr[i];
			}
	printf("The maximun number is:%d",max);
	printf("The minimum number is:%d",min);
	return 0;
}
	
		
