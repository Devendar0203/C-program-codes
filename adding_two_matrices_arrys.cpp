

#include<stdio.h>
int main()
{
	
	int a[i][j],b[i][j];
	int c1,c2,r1,r2,i,j;
	printf("Enter the number of rows and coulms 1matrix");
	scanf("%d%d",&r1,&c1);
	printf("Enter the number of rows and coulms 2matrix");
	scanf("%d %d",&r2,&c2);
	
	printf("Enter the elements of Frist matrix\n");


	for(i=0;i<r1;i++)
	
	{
			for(j=0;j<c1;j++)
		
	{
			
		scanf("%d",&a[i][j]);
	}
	}

printf("Enter the elements of second  matrix\n");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		
		{
		
		scanf("%d",&b[i][j]);
	}

}
 // Add the matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result
    printf("Resultant Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*if(r1==r2&&c==c2)
{
	
	int c[r1][c1];
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		
		{
			c[i][j]=
		}
	}
}*/
















