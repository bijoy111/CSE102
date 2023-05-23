#include<stdio.h>
struct Date
{
	int day;
	int month;
	int year;
};
void print (struct Date date)
{
    printf("%d //%d //%d\n",date.day,date.month,date.year);
}
int difference (struct Date date1, struct Date date2)
{
    int day=0;
    if(date1.year>date2.year)
        day+=(date1.year-date2.year)*365;
    else
        day+=(date2.year-date1.year)*365;
    if(date1.year>date2.year)
        day+=(date1.month-date2.month)*30;
    else
        day+=(date2.month-date1.month)*30;
        if(date1.year>date2.year)
        day+=(date1.day-date2.day);
    else
        day+=(date2.day-date1.day);
        return day;
}
	newDate (struct Date date1, int adddays)
	{
	    int n=adddays;
	    int y=adddays/365;
	    date1.year+=y;
	    n%=365;
	    int m=n/30;
	    date1.month+=m;
	    n%=30;
	    date1.day+=n;
	    print (date1);
	}
int main()
{
    struct Date date1,date2;
    int adddays;
    scanf("%d %d %d",&date1.day,date1.month,date1.year);
     scanf("%d %d %d",&date2.day,date2.month,date2.year);
     scanf("%d",adddays);
     int day=difference (date1,date2);
     printf("%d\n",day);
     newDate (date1, adddays);
    return 0;
}

