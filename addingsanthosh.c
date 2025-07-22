#include<stdio.h>
int main()
{
	
	int c1,c2,r1,r2,A[r1][c1],B[r2][c2],C[r1][c2],i,j,k;
	 int matrixA[r1][c1], matrixB[r2][c2], C[r1][c2];
	printf("Enter the sizes of A matrix\n");
	scanf("%d%d",&r1,&c1);
	
	printf("Enter the sizes of B matrix\n");
	scanf("%d%d",&r2,&c2);
	if (c1==r2) 
	
		printf("enter the elements in  A matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			
			scanf("%d",&A[i][j]);
			
		}
		
	}
	
	printf("enter the elements in  B matrix\n");
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j]);
			
		}
		
		
	}
	// Initialize the result matrix to zero
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
         C[i][j] = 0;
        }
    }
    
	 // Multiply the matrices
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k <c1; k++) {
            C[i][j] += matrix A[i][k] * matrix B[k][j];
            }
        }
    }

    // Print the result
    printf("Resultant Matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

	
	
}
