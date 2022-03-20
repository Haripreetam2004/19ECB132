#include <stdio.h>
void swap(int *n1, int *n2);
int main()
{
int num1 = 5, num2 = 10;
int *ptr1 = &num1;
int *ptr2 = &num2;
printf("Before swapping \n");
printf("Number1 = %d\n", num1);
printf("Number2 = %d\n", num2);
swap( ptr1, ptr2);
printf("After swapping \n");
printf("Number1 = %d\n", num1);
printf("Number2 = %d", num2);
return 0;
}
 void swap(int * n1, int * n2)
{
int temp;
temp = *n1;
*n1 = *n2;
*n2 = temp;
}
