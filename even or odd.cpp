//design a function even or odd//
#include<stdio.h>
void even_or_odd(int);
int main()
{
	int n1;
	printf("before function");
	printf("Enter the number\n");
	scanf("%d",&n1);
	
	
	even_or_odd(n1);
	printf("after  functtion");
	return 0;
}


void even_or_odd(int a)
{
	if(a%2==0)
		printf("%d is even",a);
		else
		printf("%d is odd",a);
		
}
	

