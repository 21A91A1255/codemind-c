#include<stdio.h>
int main()
{
    int n,c,i,j,p=0;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        c=0;
        for(j=1;j<n+1;j++)
        {
            if(i%j==0)
            {
                c+=1;
            }
        }
        if(c==9)
        {
            p=p+1;
            printf("%d ",i);
        }
    }
    printf("
");
    printf("Total=%d",p);
}