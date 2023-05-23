#include<stdio.h>
int perfectnum(int x)
{
    int s=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
            s+=i;
    }
    if(s==x)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int r=perfectnum(i);
        if(r==1)
            sum+=i;
    }
    printf("%d",sum);
    return 0;
}

