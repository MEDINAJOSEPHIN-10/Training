#include<stdio.h>
 
int main(){
    int n,i,j;
    int count;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array:");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for(int i=1;i<=n;i++){
        if(visited[i]==1){
            continue;
        }
        int count=1;
        for(int j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        printf("Element %d occurs %d times \n",arr[i],count);
    }

    return 0;
}
