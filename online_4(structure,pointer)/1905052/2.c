#include<stdio.h>
#include<string.h>
#include<windows.h>
char* removesubstring(char* s, char* t,int n)
{
    int i,j,k,newLen,temp=0;
    newLen = strlen(s);
    int l=strlen(t);
    int m=l-n;
    for(i=0; *(s+i); i++)
    {
        k=i;
        for(j=n; *(t+j); j++)
        {
            if(*(s+k)==*(t+j))
            {
                k++;
            }
            else
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            for(k=i;k<=m;k++)
                *(s+k) = -1;
            newLen-=m;
            //i=i+m-1;

        }
        temp=0;
    }
    char* newStr = (char*) malloc((newLen+1) * sizeof(char));
    for(i=0, j=0; *(s+i) != 0; i++)
        if(*(s+i) != -1)
        {
            *(newStr+j) = *(s+i);
            j++;
        }
    *(newStr+j) = '\0';
    return newStr;
}
int main()
{
    char s1[101], s2[101], *newStr;
    int n;
    gets(s1);
    gets(s2);
    scanf("%d",&n);
    newStr = removesubstring(s1, s2,n);
    puts(newStr);
    free(newStr);
    return 0;
}
