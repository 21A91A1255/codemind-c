#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n,i,s=0,t,r,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        t=fact(r);
        s=s+t;
        n=n/10;
    }
    if(s==temp)
    {
    printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}