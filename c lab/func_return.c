#include<stdio.h>
int add(int, int);
int add(int num1, int num2)
{
	int result = num1 + num2;
	return(result);
}
int main()
{
	int num1, num2, result;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	result = add(num1, num2);
	printf("Result of addition is %d \n", result);
	return(0);
}
