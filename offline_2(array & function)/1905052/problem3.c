#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
    }
    int val=max;
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<n;j++){
        if(a[j]>=val)
        {
            printf("**");
        }
        else
            printf("  ");
          printf(" ");
        }
        val--;
            printf("\n");
    }
    return 0;
}
