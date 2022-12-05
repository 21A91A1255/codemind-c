#include<stdio.h>
int sd(int n)
{
    int p=0,c=0,r;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        p=p+1;
        if(r==0)return 0;
        else if(temp%r==0)
        {
            c=c+1;
        }
        n=n/10;
    }
    if(p==c)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(sd(i))
        {
            printf("%d ",i);
        }
    }
}