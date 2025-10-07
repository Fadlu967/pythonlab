#include<stdio.h>
int main()
{
	int ary[50];
	int n, sum = 0;
	printf("Enter the size of the array (between 1-50): ");
	scanf("%d", &n);
	
	if(n > 50)
	{
		printf("Invalid input \n");
	}
	else
	{
		for(int i=0; i < n; i++)
		{
			printf("Enter the element in index [%d] : ", i);
			scanf("%d", &ary[i]);
		}
	
		for(int j=0; j < n; j++)
		{
			sum += ary[j];
		}
		
		printf("The sum of all elements in the array is %d \n", sum);
	}
	
	return 0;
}
