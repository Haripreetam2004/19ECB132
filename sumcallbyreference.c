#include<stdio.h>
int add(int* ,int*);
int main()
{
	int a, b, c;
	printf("Enter Two Values: \n");
	scanf("%d %d",&a,&b);
	c=add(&a, &b);
	printf("The Sum is: %d \n",c);
	return 0;
}
int add(int *x, int *y)
{
	int z;
	z=*x+*y;
	return(z);
}

/*output:
Enter Two Values: 
8
9
The Sum is: 17 */
