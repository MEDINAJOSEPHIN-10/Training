#include <stdio.h>
 
int main()
{
    int n1,n2,n3,n4;
    int arr3[n3];
    int temp[n3];
  
    //first array 
    printf("Enter the size of an first array:");
    scanf("%d",&n1);
    int arr[n1];
    printf("Enter the elements of an first array of size %d :",n1);
    //reading the first array
    for(int i=1;i<=n1;i++){
        scanf("%d",&arr[i]);
    }
    //second array
    printf("Enter the size of an second array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements of an second array of size %d:",n2);
    
    //reading the second array
    for(int i=1;i<=n2;i++){
        scanf("%d",&arr2[i]);
    }
    n3=n1+n2;
    for(int i=1;i<=n1;i++){
        arr3[i]=arr[i];
    }
    for(int i=1;i<=n2;i++){
        arr3[i+n1]=arr2[i];
    }
    printf("The merged array is:\n");
    for(int i=1;i<=n3;i++){
        printf("%d",arr3[i]);
    }
    printf("\n");
    /*temp[i]=arr3[i];
    printf("After removing the even numbers in array:");
    for(int i=1;i<=n3;i++){
        if(temp[i]%2 !=0){
          printf("%d",temp[i]);
        }
    }
    printf("\n");
    printf("The sorted array:");
    for(i=1;i<=n3;i++){
        for(j=i+1;j<=n3;j++){
            if(arr[i]>arr[j]){
                temp2[i]=temp[i];
                temp[i]=temp[j];
                temp[j]=temp2[i];
                printf("%d",temp2[j]);
            }
        }
    }
    printf("\n");
*/
 
    return 0;
}
