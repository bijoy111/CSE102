#include<stdio.h>

int main()
{
    float income, tax;
    scanf("%f",&income);
    int x=(int)income;
    switch(x/10000)
    {
    case 0:
        tax=income*(10/100.0);
            printf("%f",tax);
        break;

    case 1:
    case 2:
        tax=10000.0*(10/100.0) + (income-10000.0)*(15/100.0);
        printf("%f",tax);
        break;

    case 3:
    case 4:
        tax=30000.0*(15/100.0) + (income-30000.0)*(20/100.0);
        printf("%f",tax);
        break;

    default:
        tax=50000.0*(20/100.0) + (income-50000.0)*(25/100.0);
        printf("%f",tax);
        break;
    }

    return 0;
}
