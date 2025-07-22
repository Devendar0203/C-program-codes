#include<stdio.h>
int main ()
{
	int i,n,c;
	
	
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	
	{
		c=n-i;
		
		printf("%d\n",&c);
		
	}
	return 0;
}
