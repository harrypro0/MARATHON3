#include <stdio.h>
#include <stdlib.h>


int main() {
	double a,b,c;
	printf("enter three valid triangle side:");
	scanf("%1f %1f %1f",&a,&b,&c);
	if(a==b && b==c )
	printf("equilateral\n");
	else if(a==b||b==c||a==c)
		printf("isosceles\n");
    else
    printf("scalene\n");
	return 0;
}