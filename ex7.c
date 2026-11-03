#include <stdio.h>
#include <stdlib.h>



int main() {
	int score;
	printf("enter score(0-100):");
	scanf("%d",&score);
	if(score<0 || score>100)
	printf("invalid score\n");
	else if(score>=90)
	printf("grade A\n");
	else if(score>=90)
	printf("grade A\n");
	else if(score>=80)
	printf("grade B\n");
	else if(score>=70)
	printf("grade C\n");
	else if(score>=60)
	printf("grade D\n");
	else if(score>=50)
	printf("grade E\n");
	else if(score>=40)
	printf("grade F\n");
	return 0;
}