#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s1[501],s2[501],s3[11];
    gets(s1);
    gets(s2);
    gets(s3);
    int i,j=0,k,l,m,n,a,b,c,d,e,f=0,x=0,y=0,p=0;
    a=strlen(s1);
    b=strlen(s2);
    c=strlen(s3);
    for(i=0;i<a;i++)
    {
        if(s1[i]!=s2[j])
        {
            j=0;
        }
        else if(s1[i]==s2[j])
        {
            j++;
            if(j==b)
            {
                if(b<c){
                x=1;
                j=0;
                d=a;
                a=a-b+c;
                e=a-1;
                l=i+1;
                m=i-b+c+1;
                n=m;
                for(k=d-1;k>=l;k--)
                {
                    s1[e]=s1[k];
                    e--;
                }
                for(i=i-b+1;i<n;i++)
                {
                   s1[i]=s3[p];
                   p++;
                }
                p=0;
                i--;
                }
                else if(b>c)//b=2,c=1
                {
                    j=0;
                    y=1;
                    a=a-b+c;
                    l=i-b+1;
                    for(k=l;k<l+c;k++)
                    {
                        s1[k]=s3[f];
                        f++;
                    }
                    int g=k;
                    int h=i+1;
                    for(;g<a;g++)
                    {
                        s1[g]=s1[h];
                        h++;
                    }
                    i=i-b+c;
                    f=0;
                }
                else
                {
                    j=0;
                    l=i-b+1;
                    for(k=l;k<=i;k++)
                    {
                        s1[k]=s3[p];
                        p++;
                    }
                    p=0;
                }
            }
        }
    }
    if(x==1||y==1)
    {
        for(int i=0;i<a;i++)
        printf("%c",s1[i]);
    }
    else
    {
    for(int i=0;i<=a;i++)
        printf("%c",s1[i]);
    }
    return 0;
}
