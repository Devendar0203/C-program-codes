//to create an arry and insert and display the elements

#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Number of elements you wish to store");
	scanf("%d",&n);
	int arr[n];
	
	printf("Insert the %d number\n",n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d ",i+1);
		scanf("%d",&arr[i]);
		
	}
		printf("Display the element of the arry\n");
	for(i=0;i<n;i++)
	
	
	
	{
		printf("the element %d is %d\n" ,i+1,arr[i]);
	}
	
	return 0;
}

