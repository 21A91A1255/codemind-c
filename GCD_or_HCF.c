#include<stdio.h>
int main()
{
    int a,b,large=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(i>large)
            {
                large=i;
            }
            
        }
    }
    printf("%d",large);
}