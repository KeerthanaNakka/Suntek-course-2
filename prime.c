/* To print the first n prime numbers*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,c,d=0;
    scanf("%d",&n);
    for(i=1;i<=1000;i++)
    {c=0;
for(j=1;j<=i;j++)
{
    if(i%j==0)
    {
        c++;
    }
}
if(c==2)
{
    printf("%d ",i);
    d++;
}
if(d==n)
break;
    }
return 0;
}
