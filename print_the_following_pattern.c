#include<stdio.h>
int main()
{
    int i,j,row;

    
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%d", i);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", i);
        }
        printf("
");
    }

    return 0;
}