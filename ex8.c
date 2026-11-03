#include <stdio.h>
#include <stdlib.h>


int main() {
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if((ch>="A" && ch<="Z")||(ch>="a" && ch<="z")){
		if(ch=="a" || ch=="e"||ch=="i" || ch=="o"||ch=="u" || ch=="A" || ch=="E"||ch=="I" || ch=="O"||ch=="U");
		printf("%c is a vowel\n",ch);
	
		printf("%c is a cosonant\n",ch);
	}else{ 
		printf("%c is not a letter\n",ch);
	}
	return 0;
}