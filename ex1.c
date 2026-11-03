#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
    if(n>0)
        printf("positive\n");
    else if (n>0)
        printf("negative\n");
    else
        printf("zero\n");
    return 0;
}
