#include<stdio.h>
int main(){
	int arr[40],i,n,target;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&target);
	for(i=0;i<n;i++)
		if(arr[i]==target)
		break;
	if(i<n)
		printf("Element is found in the index=%d",i);
		else
			printf("Elements is not found");
		return 0;
	}
