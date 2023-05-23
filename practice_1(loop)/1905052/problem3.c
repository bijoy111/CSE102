#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n%3==0&&n%7==0)
    {
        case 1:printf("TS");break;
        case 0:switch(n%3!=0&&n%7!=0){
        case 1:printf("NONE");break;
        case 0:switch(n%3==0){
        case 1:printf("T");break;
        case 0:printf("S");
        }
        }
    }
    return 0;
}
