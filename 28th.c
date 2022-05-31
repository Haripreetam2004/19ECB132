#include <stdio.h>
int main() 
{
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
output:
Enter an integer: 7
7 * 1 = 7 
7 * 2 = 14 
7 * 3 = 21 
7 * 4 = 28 
7 * 5 = 35 
7 * 6 = 42 
7 * 7 = 49 
7 * 8 = 56 
7 * 9 = 63 
7 * 10 = 70 