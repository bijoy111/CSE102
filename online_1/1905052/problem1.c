#include<stdio.h>
int main()
{
    int N;
        scanf("%d",&N);
        int m=N/2;
        int p=m;
        int q=1;
        for(int i=1;i<=N;i++)
        {
            if(i<=m+1)
            {
                for(int j=1;j<=p;j++)
                printf(" ");
                    for(int k=1;k<=i;k++)
                    {
                        if(i%2==1)
                        {
                        if(k%2==1)
                            printf("1 ");
                        else if(k%2==0)
                            printf("0 ");
                        }
                        else if(i%2==0)
                        {
                        if(k%2==1)
                            printf("0 ");
                        else if(k%2==0)
                            printf("1 ");
                        }
                    }
                    for(int j=1;j<=p;j++)
                    printf(" ");
                    p--;
            }
            else if(i>m+1)
            {
                for(int j=1;j<=q;j++)
                printf(" ");
                for(int k=1;k<=m;k++)
                    {
                        if(i%2==1)
                        {
                        if(k%2==1)
                            printf("1 ");
                        else if(k%2==0)
                            printf("0 ");
                        }
                        else if(i%2==0)
                        {
                        if(k%2==1)
                            printf("0 ");
                        else if(k%2==0)
                            printf("1 ");
                        }
                    }
                    for(int j=1;j<=p;j++)
                    printf(" ");
                    m--;
                    q++;
            }
            printf("\n");
        }
    return 0;
}
