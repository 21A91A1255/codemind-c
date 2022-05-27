#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n,a=0,b=0,k,r;
    scanf("%s",str);
    r=strlen(str);
    for(i=0;i<r;i++)
    {
        if(str[i]=='z')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    k=2*a;
    if(b==k)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}