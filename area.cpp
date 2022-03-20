#include<stdio.h>
float PI = 3.14;
int foo(){
	printf("%2f");
}
int main(){
	float r,area;
	scanf("%f",&r);
	area = PI * r * r;
	printf("area : %.2f",area);
	return 0;
}
