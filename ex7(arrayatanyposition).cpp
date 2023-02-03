#include<stdio.h>
int main(){
	int arr[40],i,num,pos,value;
	printf("Enter the size of array:");
	scanf("%d",&num);
	printf("Enter the elements into array:");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("Enter position to be inserted:");
	scanf("%d",&pos);
	printf("Enter value to be inserted:");
	scanf("%d",&value);
	for(i=num-1;i>=pos-1;i--)
		arr[i+1]=arr[i];
		arr[pos-1]=value;
	printf("Array after insertion:");
	for(i=0;i<=num;i++)
		printf("%d\n",arr[i]);
		return 0;
}
