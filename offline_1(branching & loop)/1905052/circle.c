#include<stdio.h>
#include<math.h>

int main()
{
	int x1,y1,r1,x2,y2,r2,d,max,min;
	scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
	d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	max=r1>r2?r1:r2;
	min=r1<r2?r1:r2;
	if(d > max+min)
	{
		printf("Do not intersect\n");
	}
	else if(d<=max+min && d>=max-min)
    {
        printf("Intersect\n");
    }
    else
    {
        printf("One is inside the other\n");
    }



	return 0;
}
