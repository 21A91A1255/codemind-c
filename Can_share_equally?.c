#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x%2==0 and (x>0 or y%2==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}