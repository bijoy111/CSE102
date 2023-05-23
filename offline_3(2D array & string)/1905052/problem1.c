#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    float A[5][5]= {0};
    float B[5][5]= {0};
    float matrix[5][5];
    int i,j,k,length,r1,c1,r2,c2,matA=0,matB=0;
    float sum=0.0,ratio,det=0;
    for(;;)
    {
        char s[1001],str[1001];
        gets(s);
        length=strlen(s);
        for(i=0,j=0; i<length; i++)
        {
            if(s[i]!=' ')
            {
                str[j]=s[i];
                j++;
            }
        }
        str[j]='/0';
        if(str[0]=='e')
            break;
        else if(str[0]=='i'||str[0]=='I')
        {
            if(str[2]=='a'||str[2]=='A')
            {
                matA=1;
                scanf("%d %d",&r1,&c1);
                for(i=0; i<r1; i++)
                {
                    for(j=0; j<c1; j++)
                        scanf("%f",&A[i][j]);
                }
            }
            else
            {
                matB=1;
                scanf("%d %d",&r2,&c2);
                for(i=0; i<r2; i++)
                {
                    for(j=0; j<c2; j++)
                        scanf("%f",&B[i][j]);
                }
            }
        }
        else if(str[0]=='o'||str[0]=='O')
        {
            if(str[3]=='a'||str[3]=='A')
            {
                if(matA==0)
                    printf("No A matrix found\n");
                else
                {
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c1; j++)
                            printf("%0.1f ",A[i][j]);
                        printf("\n");
                    }
                    printf("\n");
                }
            }
            else
            {
                if(matB==0)
                    printf("No B matrix found\n");
                else
                {
                    for(i=0; i<r2; i++)
                    {
                        for(j=0; j<c2; j++)
                            printf("%0.1f ",B[i][j]);
                        printf("\n");
                    }
                    printf("\n");
                }
            }
        }
        else if(str[1]=='+')
        {
            if(matA==0)
                printf("No A matrix found\n");
            else if(matB==0)
                printf("No B matrix found\n");
            else if(matA==0&&matB==0)
                printf("No A and B matrix found\n");
            else if(r1==r2&&c1==c2)
            {
                for(i=0; i<r1; i++)
                {
                    for(j=0; j<c1; j++)
                        printf("%0.1f ",A[i][j]+B[i][j]);
                    printf("\n");
                }
                printf("\n");
            }
            else
                printf("Addition not possible\n");
        }
        else if(str[1]=='-')
        {
            if(matA==0)
                printf("No A matrix found\n");
            else if(matB==0)
                printf("No B matrix found\n");
            else if(matA==0&&matB==0)
                printf("No A and B matrix found\n");
            else if(r1==r2&&c1==c2)
            {
                if(str[0]=='a'||str[0]=='A')
                {
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c1; j++)
                            printf("%0.1f ",A[i][j]-B[i][j]);
                        printf("\n");
                    }
                    printf("\n");
                }
                else
                {
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c1; j++)
                            printf("%0.1f ",B[i][j]-A[i][j]);
                        printf("\n");
                    }
                    printf("\n");
                }
            }
            else
                printf("Subtraction not possible\n");
        }
        else if(str[1]=='*')
        {
            if(matA==0)
                printf("No A matrix found\n");
            else if(matB==0)
                printf("No B matrix found\n");
            else if(matA==0&&matB==0)
                printf("No A and B matrix found\n");
            else if(str[0]=='a'||str[0]=='A')
            {
                if(c1==r2)
                {
                    for ( i = 0 ; i < r1 ; i++ )
                    {
                        for ( j = 0 ; j < c2 ; j++ )
                        {
                            for ( k = 0 ; k < r2 ; k++ )
                            {
                                sum = sum + A[i][k]*B[k][j];
                            }
                            printf("%0.1f ",sum);
                            sum = 0.0;
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
                else
                    printf("Multiplication not possible\n");
            }
            else
            {
                if(c2==r1)
                {
                    for ( i = 0 ; i < r2 ; i++ )
                    {
                        for ( j = 0 ; j < c1 ; j++ )
                        {
                            for ( k = 0 ; k < r1 ; k++ )
                            {
                                sum = sum + B[i][k]*A[k][j];
                            }
                            printf("%0.1f ",sum);
                            sum = 0;
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
                else
                    printf("Multiplication not possible\n");
            }
        }
        else if(str[1]=='/')
        {
            int add=0;
            int l=strlen(str);
            for(i=l-2,j=0; i>1; i--)
            {
                int n=str[i]-48;
                add+=n*pow(10,j);
                j++;
            }
            if(str[0]=='a'||str[0]=='A')
            {
                if(matA==0)
                    printf("No A matrix found\n");
                else
                {
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c1; j++)
                            printf("%0.1f ",(A[i][j])/add);
                        printf("\n");
                    }
                    printf("\n");
                }
            }
            else
            {
                if(matB==0)
                    printf("No B matrix found\n");
                else
                {
                    for(i=0; i<r2; i++)
                    {
                        for(j=0; j<c2; j++)
                            printf("%0.1f ",(B[i][j])/add);
                        printf("\n");
                    }
                    printf("\n");
                }
            }
        }
        else if(str[0]=='d'||str[0]=='D')
        {
            if(str[3]=='a'||str[3]=='A')
            {
                if(matA==0)
                    printf("No A matrix found\n");
                else if(r1!=c1)
                {
                    printf("this A matrix has no determinant as it is not a square matrix\n");
                }
                else
                {
                    if(r1==2)
                    {
                        det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
                        printf(" %0.1f\n", det);
                    }
                    else if(r1==3)
                    {
                        det=A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
                        printf(" %0.1f\n", det);
                    }
                    else
                    {
                        for(i=0; i<r1; i++)
                        {
                            for(j=0; j<r1; j++)
                                matrix[i][j]=A[i][j];
                        }
                        for(i = 0; i < r1; i++)
                        {
                            for(j = 0; j < r1; j++)
                            {
                                if(j>i)
                                {
                                    ratio = matrix[j][i]/matrix[i][i];
                                    for(k = 0; k < r1; k++)
                                    {
                                        matrix[j][k] -= ratio * matrix[i][k];
                                    }
                                }
                            }
                        }
                        det = 1;
                        for(i = 0; i < r1; i++)
                            det *= matrix[i][i];
                        printf(" %0.1f\n", det);
                    }
                }
            }
            else
            {
                if(matB==0)
                    printf("No B matrix found\n");
                else if(r2!=c2)
                {
                    printf("this B matrix has no determinant as it is not a square matrix\n");
                }
                else
                {
                      if(r2==2)
                    {
                        det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
                        printf(" %0.1f\n", det);
                    }
                    else if(r2==3)
                    {
                        det=A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
                        printf(" %0.1f\n", det);
                    }
                    else{
                    for(i=0; i<r2; i++)
                    {
                        for(j=0; j<r2; j++)
                            matrix[i][j]=B[i][j];
                    }
                    for(i = 0; i < r2; i++)
                    {
                        for(j = 0; j < r2; j++)
                        {
                            if(j>i)
                            {
                                ratio = matrix[j][i]/matrix[i][i];
                                for(k = 0; k < r2; k++)
                                {
                                    matrix[j][k] -= ratio * matrix[i][k];
                                }
                            }
                        }
                    }
                    det = 1;
                    for(i = 0; i < r2; i++)
                        det *= matrix[i][i];
                    printf(" %0.1f\n", det);
                }
                }
            }
        }
        else if(str[0]=='t'||str[0]=='T')
        {
            if(str[5]=='a'||str[5]=='A')
            {
                if(matA==0)
                    printf("No A matrix found\n");
                else
                {
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c1; j++)
                        {
                            printf("%0.1f ",A[j][i]);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
            }
            else
            {
                if(matB==0)
                    printf("No B matrix found\n");
                else
                {
                    for(i=0; i<r2; i++)
                    {
                        for(j=0; j<c2; j++)
                        {
                            printf("%0.1f ",B[j][i]);
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
