#include <stdio.h>
#include <stdlib.h>


int main() {
	double a,b;
	printf("enter two numbers:");
	scanf("%1f %1f",&a,&b);
	if(a>b)
	printf("%.2f is larger\n",a);
	else if(b>a)
	printf("%.2f is larger\n",b);
	else 
	printf("both numbers are equal\n");
	
	return 0;
}