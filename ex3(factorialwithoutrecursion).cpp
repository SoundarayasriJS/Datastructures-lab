#include<stdio.h>
int main(){
	int i,num,fact;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("Factorial of number=%d",fact);
	return 0;
}
