#include<stdio.h> 
 
void quickSort(int[], int, int); 
int partition(int[], int, int); 
void swap(int arr[], int, int); 
 
int main() 
{ 
    int n, i; 
 
    printf("Enter Array Size\n"); // Reading the size of the Array 
    scanf("%d", &n); 
 
    int arr[n]; 
 
    printf("Enter Array Elements\n"); 
    for(i = 0; i < n; i++) //Reading elements into the Array 
        scanf("%d", &arr[i]); 
 
    quickSort(arr, 0, n-1);  // 0 is substitued into low, n-1 is substituted in high 
 
    printf("After the QuickSort\n"); 
 
     
    for(i = 0; i < n; i++)  //printing the final sorted array 
        printf("%d ", arr[i]); 
    printf("\n"); 
 
    return 0; 
} 
void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int j=partition(arr,low,high);
		quicksort(arr,low,j-1);
		quicksort(arr,j+1,high);
		
	}
}
int partition(int arr[],int low,int high)
{
	int i=low;
	int j=high;
	int pivot=arr[i];
	while(i<j){
	
	while(arr[i]<=pivot)
	{
		i++;
	}
	while(arr[j]>pivot)
	{
		j--;
	}
	if(i<j)
	{
		swap(arr,i,j);
	}
	
}
swap(arr,low,j);
return j;
}

void swap(int arr[], int i, int j) 
{ 
    int temp = arr[i]; 
    arr[i] = arr[j]; 
    arr[j] = temp; 
}
