#include<stdio.h>

int main(){
	int n,j;
	int temp[n];
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements of array:",n);
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<=n;i++){
        for(j = i+1; j <=n; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k <n; k++){
                    arr[k] = arr[k+1];
                }
               j--;
               n--;
            }
        }
    }
    printf("\nAfter deleting the duplicate element the Array is:\n");
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
	return 0;
}
