//design a c programme to create an array,insert the elements ito a arry.count the number of even numbers and display those numbers.
#include <stdio.h>
int main()
{
	int arr[100];
	int n,i,size;
	
	
	printf("ENter the size of array");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter the   elements in array;");
		scanf("%d",&arr[i]);
		
		
	}
	
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			printf("even numbers are\t",arr[i]);
			
		}
		
		else
		{
			printf("odd numbers are",arr[i]);
			
		}
	}
	
	return 0;
}
