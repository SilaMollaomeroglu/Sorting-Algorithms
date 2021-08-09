#include <stdio.h>
#include <math.h>
void InsertionSort(int array[],int n)
{
	int i,temp,j;
	
	for(i = 2; i < n; i++)
	{
		temp = array[i];
		j = i;
		while(j >= 2 &&  temp < array[j-1])
		{
			array[j] = array[j-1];
			j = j - 1;
		}
		array[j] = temp;
}
}
void printArray(int array[],int n)
{
	printf(" Insertion Sort:");
	int i;
	for(i = 0; i < n; i++)
	printf("%d ",array[i]);
printf("\n");
}


int main()
{
	int array[] = {2,3,4,500,46,7,8,90,15};
	int n = sizeof(array)/sizeof(array[0]);
	InsertionSort(array,n);
	printArray(array,n);

	return 0;
}

