#include <stdio.h>
#include <stdlib.h>


int main() {
	double a,b,c,largest;
	printf("enter three number:");
	scanf("%1f %1f %1f",&a,&b,&c);
	largest=a;
	if (b>largest)
	largest=b;
	 if(c>largest)
	largest=c;
	printf("largest=%.2f\n",largest);
	
	return 0;
}