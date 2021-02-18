/*Print even number from m to n using for loop*/
#include<stdio.h>
#include<conio.h>
void printeven(int,int);
void main()
{
    int m,n;
    printf("enter the value of two numbers which to want to print the even numbers of. \n");
    scanf("%d %d", &m,&n);
    printeven(m,n);
    getch();
}
void printeven(int m, int n)
{
    for(int i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("\n %d",i);
        }
    }
}