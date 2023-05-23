#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i=1,j=1;i<=N;i++,j+=2)
    {
        if(i%4==1)
        {
            sum+=j;
        }
        else if(i%4==2)
        {
            sum+=j*j;
        }
        else if(i%4==3)
        {
            sum-=j*j;
        }
        else if(i%4==0)
        {
            sum-=j;
        }
    }
    printf("%d",sum);
    return 0;
}
