#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    scanf("%d",&x);
    float y=x;
    y=(x*3.141592)/180.0;
    float sum=1.0;
    for(int i=2,m=1; i<=200; i=i+2,m++)
    {
        float fac=1.0;
        for(int p=1; p<=i; p++)
        {
            fac=fac*p;
        }
        if(m%2==0)
        {
            sum=sum+(pow(y,i)/fac);
        }
        else
        {
            sum=sum-(pow(y,i)/fac);
        }
    }
    printf("%f",sum);
    return 0;
}
