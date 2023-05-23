#include<stdio.h>
int digitcount(int a[],int n,int m)
{
    int max=-1;
    int ma=0;
    int re=-1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            while(a[i]!=0)
            {
                int x=a[i]%10;
                if(x==m)
                {
                    ma++;
                }
            }
        }
        if(max<ma&&ma>0){
            {
                max=ma;
                re=i;
            }

        }
    }
    return re;
}
int ispal(int num)
{
    int number=num;
    int n=num;
    int reversenum;
    int remainder;
    while(n!=0)
    {
        remainder=n%10;
        reversenum=reversenum*10+remainder;
        n/=10;
    }
    if(number==reversenum)
        return 1;
    else
        return 0;
}
int palindromechecking(int a[],int n)
{
    int prime[n];
    for(int i=1;i<=n;i++)
        prime[i]=1;
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p]==1)
        {
            for(int i=p*2;p<=n;p++)
            {
                prime[i]=0;
            }
        }
    }
    for(int p=2;p<=n;p++)
    {
        if(prime[p]&&ispal(p))
            a[p]=1;
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=1;i<=n;i++)
        a[i]=0;
    palindromechecking(a,n);
    int num=digitcount(a,n,m);
    printf("%d",num);
    return 0;
}
