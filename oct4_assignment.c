/*To count the number of words in a sentence*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,flag=1;
    char s[100];
    scanf("%[^\n]%*c",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            if(flag==0)
            {
                c++;
                flag=1;
            }
        }
        else
        {
            flag=0;
        }
    }
    if(flag==0 )
        ++c;
    printf("%d",c);
     return 0;
}


