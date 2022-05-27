#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n,s=0,r;
    scanf("%[^
]s",str);
   // r=strlen(str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            s++;
        }
    }
    printf("%d",s+1);
}