#include<stdio.h>
int main()
{
	int add(int num1, int num2)
	{
		int result = num1 + num2;
		printf("Result is : %d \n", result);
	}
	
	int num1, num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
	add(num1, num2);
	
	return(0);
}
