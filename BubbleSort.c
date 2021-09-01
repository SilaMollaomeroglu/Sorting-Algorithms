#include <stdio.h>
#include <math.h>



void swap(int *xp,int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void BubbleSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n-1;j++)
			if(arr[j] < arr[j+1])
				swap(&arr[j],&arr[j+1]);
}

void printArray(int arr[],int size)
{
	printf(" Bubble Sort: ");
	int i;
	for(i=0;i < size;i++)
		printf("%d ",arr[i]);
printf("\n");

}
int main()
{
	int arr[] = {2,3,4,5,6,7,8,9,15};
	int n = sizeof(arr)/sizeof(arr[0]);

	
	BubbleSort(arr,n);
	printArray(arr,n);
	
	return 0;
}
