//avg of first n numbers(natural numbers) using do while loop
#include<stdio.h>
int main()
{
	int i = 0, n;
	float sum = 0, avg;
	printf("Enter the limit : ");
	scanf("%d",&n);
	do
	{
		i++;
		sum += i;
	}
	while(i < n);
	avg = sum/n;
	printf("Avarage of first %d numbers are %.2f \n",n,avg);
	return 0;
}


