#include<stdio.h>
#include<conio.h>
#include<math.h>
void oddPrint(int);
void main()
{
    int n;
    printf("enter the number till where you want the sum of square of off natural number");
    scanf("%d",&n);
    oddPrint(n);
}
void oddPrint(int n)
{
    int i=1;float s,sum=0;
    while(i<=n)
    {
        if (i%2!=0)
        {
            s=pow(i,2);
            sum=sum+s;
            printf("\n number is %d and its square is %f",i,s);
        }
        i++;
    }
    printf("the sum of squares of odd numbers is %f",sum);
}    
