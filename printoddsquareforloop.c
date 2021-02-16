#include<stdio.h>
#include<conio.h>
void printodd(int,int);
void main()
{
    int m,n;
    printf("enter the number uptill which you want to print the square of odd numbers \n");
    scanf("%d %d", &m, &n);
    printodd(m,n);
    getch();
}
void printodd(int m,int n)
{
    int r,s=0;
    for(int i=m;i<=n;i++)
    {
        if (i%2!=0)
        {
            r=i*i;
            printf("\n %d %d", i,r);
            s=s+r;
        }
    }
    printf("\n sum %d",s);
}