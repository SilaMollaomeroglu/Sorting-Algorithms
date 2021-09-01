#include <stdio.h>
#include <math.h>
void swap(int *xp,int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}



void SelectionSort(int arr[],int n)
{
	int i,j,min_idx;
	for(i=0;i < n-1;i++)
	{
		min_idx = i;
		for(j=i+1;j<n;j++)
		if (arr[j] > arr[min_idx])
			min_idx = j;
		swap(&arr[min_idx],&arr[i]);
	}
}
void printArray(int arr[],int size)
{
	printf(" Selection Sort: ");
	int i;
	for( i=0;i<size;i++)
		printf("%d ", arr[i]);
printf("\n");
	
}
int main()
{
	int arr[] = {2,3,4,5,6,7,8,9,15};
	int n = sizeof(arr)/sizeof(arr[0]);

	
	SelectionSort(arr,n);
	printArray(arr,n);
	
	return 0;
}
