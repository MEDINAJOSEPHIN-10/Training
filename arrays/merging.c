#include <stdio.h>
 
int main()
{
    int n1,n2,n3;
    printf("Enter the size of an first array:");
    scanf("%d",&n1);
    int arr[n1];
    int arr3[n3];
    printf("Enter the elements %d in an array:",n1);
    for(int i=1;i<=n1;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the elements %d in an array:",n2);
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
    for(int i=1;i<=n3;i++){
    printf("%d ",arr3[i]);
    }
    return 0;
}
