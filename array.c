/* To print the occurence of a digit in the array
ex:a[5]={114,331,121,123,115}
digit=1
count=8*/
#include<stdio.h>
int main()
{
    int i,a[100],c=0,n,d,r;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
        for(i=0;i<n;i++)
    {
        while(a[i]>0)
        {
            r=a[i]%10;
            if(r==d)
                c++;
            a[i]=a[i]/10;
        }
    }
    printf("%d",c);
    return 0;
}
