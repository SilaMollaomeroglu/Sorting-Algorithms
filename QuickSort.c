#include<stdlib.h>
#include<stdio.h>
#include<iostream>



void swap(int *xp,int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
} 
 
  
  int partition (int arr[], int low, int high)
	{
    int pivot = arr[high];  
    int i = (low - 1);  
 
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] >= pivot)
        {
            i++;    
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
	}

void QuickSort(int a[], int p, int r)    
{
	int arr_size =9 ;
	int c;
    if(p < r)
    {
        int q;
        q = partition(a, p, r);
        QuickSort(a, p, q-1);
        QuickSort(a, q+1, r);
    }

}


void printArray(int a[], int size)
{
	printf("Quick Sort: ");

    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
	int arr[]={7,3,5,8,2,9,4,15,6};

	int arr_size = sizeof(arr)/sizeof(arr[0]);


	QuickSort(arr, 0, arr_size-1);
	printArray(arr,arr_size);
	
	return 0;
	
}
