#include<stdio.h>
int main()
{
	int num = 0, i = 1, lrg;
	while(i <= 5)
	{
		printf("Enter number %d : " ,i);
		scanf("%d",&num);
		if(num > lrg)
		{
			lrg = num;
		}
		i += 1;
	}
	printf("Largest number is %d \n " ,lrg);
	return 0;
}
