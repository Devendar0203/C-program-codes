#include<stdio.h>

int swap(int a,int b);
main()
{
	int a,b;
	printf("Enter the numbers");
	scanf("%d%d",&a,&b);
	
	swap(a,b);
	
	printf("%d and %d" ,a,b);
	
	return 0;

}


	swap(int a,int b){
	
	
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	
}
