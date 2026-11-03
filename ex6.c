#include <stdio.h>
#include <stdlib.h>

int main() {
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age<0)
	printf("invalid age\n");
	else if(age>=18)
	printf("eligible to vote\n");
	else 
	printf("not eligible to vote\n");
	return 0;
}