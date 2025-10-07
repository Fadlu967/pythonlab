#include<stdio.h>

//function to display an array
void display(int ary[], int sze)
{
	printf("\nArray elements are : ");
	for(int i=0; i < sze; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");
}

//function to sort an array
void sort(int ary[], int sze)
{
	for(int i=0; i < sze; i++)
	{
		for(int j = i+1; j < sze; j++)
		{
			if(ary[i] > ary[j])
			{
				int temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;
			}
		}
	}
}

//function to merge 2 arrays
void merge(int ary1[], int size1, int ary2[], int size2, int ary3[])
{
	int i;
	for(i = 0; i < size1; i++)
	{
		ary3[i] = ary1[i];
	}
	for(int j = 0; j < size2; j++)
	{
		ary3[i] = ary2[j];
		i++;
	}
}

int main()
{	
	int arr1[100], arr2[100], arr3[200];
	int sze1, sze2, sze3;
	
	// fisrt array
	printf("\nEnter the size of the array-1 (between 1-100): ");
	scanf("%d", &sze1);
	
	if(sze1 <= 100)
	{
		for(int i=0; i < sze1; i++)
		{
			printf("Enter the element in index [%d] : ", i);
			scanf("%d", &arr1[i]);
		}
	}
	
	//second array
	printf("Enter the size of the array-2 (between 1-100): ");
	scanf("%d", &sze2);
	
	if(sze2 <= 100)
	{
		for(int j=0; j < sze2; j++)
		{
			printf("Enter the element in index [%d] : ", j);
			scanf("%d", &arr2[j]);
		}
	}
	
	sze3 = sze1+sze2;
	
	printf("\nArray 1");
	display(arr1, sze1);
	printf("\nArray 2");
	display(arr2, sze2);
	printf("\nArray-1 after sorting : ");
	sort(arr1, sze1);
	display(arr1, sze1);
	printf("\nArray-2 after sorting : ");
	sort(arr2, sze2);
	display(arr2, sze2);
	printf("\nArray after merging");
	merge(arr1, sze1, arr2, sze2, arr3);
	display(arr3, sze3);
	printf("\nMerged Array after sorting");
	sort(arr3, sze3);
	display(arr3, sze3);
	
	return 0;
}

