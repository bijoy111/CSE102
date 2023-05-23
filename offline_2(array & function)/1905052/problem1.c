#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[100000];
    int c[n];
    b[0]=0;
    for(int i=1;i<=10000;i++){
        b[i]=0;
        int j=i*(-1);
        b[j]=0;
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        int l=0;
        scanf("%d",&a[i]);
        b[a[i]]++;
        if(max<b[a[i]])
            max=b[a[i]];
        for(int k=0;k<=i;k++)
        {
            if(b[a[k]]==max){
                c[l]=a[k];
                l++;
            }
        }
        for(int j=0;j<l-1;j++)
        {
            for(int m=j+1;m<l;m++)
            {
                if(c[j]>c[m])
                {
                    int tmp=c[j];
                    c[j]=c[m];
                    c[m]=tmp;
                }
            }
        }
        printf("Most frequent number = ");
        for(int p=0;p<l;p++)
        {
            if(p==(l-1))
                printf("%d",c[p]);
            else if(c[p]!=c[p+1])
                printf("%d,",c[p]);
        }
    }

    return 0;
}
