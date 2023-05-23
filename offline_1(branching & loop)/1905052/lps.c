#include<stdio.h>

int main()
{
    int x,pos=0,sum=0,t,l=0,max=-1,s=0,i=0,j,k;
    char ch;
    scanf(" %c",&ch);
    while(1)
    {
        x=ch-'0';
        if(x == 65)
        {
            break;
        }
        else if(t == 0)
        {
            t=1;
            if(max<pos)
            {
                max=pos;
                s=sum;
                j=i-max;
            }
            pos=0;
            sum=0;
            i++;
        }
        else if(x>=1 && x<=9)
        {
            k=0;
            t=1;
            l=1;
            pos++;
            sum=sum+x;
            i++;
        }
        else if(x<0)
        {
            t=0;
            k=1;

        }
        scanf(" %c",&ch);

    }
    if(l==0)
    {
        max=0;
        s=0;
        j=0;
    }
    if(k==0)
    {
        if(max<pos)
        {
            max=pos;
            s=sum;
            j=i-max;
        }
    }
    printf("Length of LPS:%d\nSum of LPS:%d\nStarting Position of LPS:%d(Assuming that position starts from 0)",max,s,j);

    return 0;
}
