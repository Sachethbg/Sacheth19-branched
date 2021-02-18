/*To print sum of square of firest n odd numbers*/
#include<stdio.h>
#include<conio.h>
void printodd(int);
void main()
{
    int n;
    printf("enter the number uptill which you want to print the square of odd numbers \n");
    scanf("%d", &n);
    printodd(n);
    getch();
}
void printodd(int n)
{
    int r,s=0;
    printf("odd number and their squares are");
    for(int i=1;i<=n;i++)
    {
        if (i%2>=0)
        {
            r=i*i;
            printf("\n %d %d", i,r);
            s=s+r;
        }
    }
    printf("\n sum of square of off numbers are= %d",s);
}