#include <stdio.h>
 
struct book{
    int price;
    char title[100];
    char author[100];
};
 
int main(){
    struct book b1[5];
    int i;
    for(int i=1;i<=2;i++){
        printf("%d booktitle:",i);
        fgets(b1[i].title,100,stdin);
        printf("%d book author:",i);
        fgets(b1[i].author,100,stdin);
        printf("%d book price:",i);
        scanf("%d",&b1[i].price);
		getchar();
    }
    for(int i=1;i<=2;i++)
    {
        printf("The book title %s \n",b1[i].title);
        printf("The book author %s \n",b1[i].author);
        printf("The book price %d \n",b1[i].price);
    }  
    return 0;
}
