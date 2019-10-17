/* Given a string, replace all the duplicate characters by $  */
#include<stdio.h>
int main()
{
    int i,j;
    char s[100];
    scanf("%[^\n]%*c",s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==' '||s[j]==' ')
                continue;
        if(s[i]==s[j])
        {
        s[j]='$';
        s[i]='$';
        }

    }
}
printf("%s",s);
return 0;
}
