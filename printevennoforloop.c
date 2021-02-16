#include<stdio.h>
#include<conio.h>
void printeven(int, int);
void main()
{
    int m,n;
    printf("enter numbers between which you want to print the even numbers\n");
    scanf("%d %d",&m,&n);
    printeven(m,n);
    getch();
}
void printeven(int m,int n)
{
    for(int i=m;i<=n;i++)
    {
        if (m%2==0)
        {
        printf("\n %d",m);
        }
        m++;
    } 
}