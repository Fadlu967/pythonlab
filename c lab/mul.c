//print multiplication table of a  given number upto 10 numbers using the for loop

#include<stdio.h>
int main()
{
	int n,i,prd;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		prd = i * n;
		printf("%d x %d = %d \n",i,n,prd);
	}
}
