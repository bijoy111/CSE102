#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
int p,q;
int recurtion(int n)
{
    int l;
    if(p==q&&(p-n)==0)
    {
        printf("%d\n",n);
        return 0;
    }
    else if(p==q)
    {
        printf("%d",n);
        p=p-n;
    }
    else if((p-n)<0)
    {
        return 0;
    }
    else if((p-n)==0)
    {
        printf("+%d\n",n);
        p=q;
        return 0;
    }
    else
    {
        p=p-n;
        printf("+%d",n);
    }
    for(l=n;l>0;l--)
    {
       recurtion(l);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    p=n;
    q=n;
    for(int i=n;i>0;i--)
    {
        recurtion(i);
    }
}
