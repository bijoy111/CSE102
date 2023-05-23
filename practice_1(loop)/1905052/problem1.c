#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    float y;
    y=(3.1416*x)/180.0;
    float sum=y;
    float multi=1.0;
    float r;
    for(int i=1,j=3;i<50;i++,j+=2)
    {
        multi=multi*(j)*(j-1);
        r=pow(y,j);
        if(i%2!=0)
        {
            sum-=(r/multi);
        }
        else if(i%2==0)
        {
            sum+=(r/multi);
        }
        printf("%d\n",j);
    }
    printf("%f",sum);
    return 0;
}
