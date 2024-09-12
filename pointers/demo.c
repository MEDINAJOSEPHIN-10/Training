#include<stdio.h>

int main(){
	void *iptr;
	int a[5];
	iptr=a;
	int i;
	for(i=0;i<5;i++)
		scanf("%d",iptr+i);
	printf("The first element %d\n",*((int *)iptr));
	printf("The address of first element %d\n",iptr);
	iptr++;
	printf("The second element %d\n",*((int*)iptr));
	printf("Tha address of second element %d\n",iptr);

	return 0;
}

