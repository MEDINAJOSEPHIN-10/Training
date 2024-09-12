#include<stdio.h>
 
struct student{
    char name[50];
    char grade;
    int age;
};
 
int main(){
    struct student s1;
    printf("enter the name:");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter the age:");
    scanf("%d",&s1.age);
    getchar();
    printf("Enter your grade:");
    s1.grade = getchar();
    printf("My name is:%s\n",s1.name);
    printf("age is:%d\n",s1.age);
    printf("Grade:%c\n",s1.grade);
    return 0;
}
