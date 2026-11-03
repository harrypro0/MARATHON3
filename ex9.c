#include <stdio.h>
#include <stdlib.h>


int main() {
	double a,b,c;
	printf("enter three side lengths:");
	scanf("%1f %1f %1f",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
	printf("valid triangle\n");
	else
		printf("not a valid triangle\n");
		
	return 0;
}