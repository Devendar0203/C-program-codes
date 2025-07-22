#include <stdio.h>

// Function to swap two numbers
 int swap(int a , int b) {
   

int main() {
    int num1, num2,temp ;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(a,b);

    // Display numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", a, b);
return 0;
}

    int swap(int a,int b)
{
	int temp;
	a=temp;
	a=b;
	b=temp;
}
