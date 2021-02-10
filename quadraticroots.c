#include<stdio.h>
#include<conio.h>
#include<math.h>
void rootsofquadratic(float, float, float);
int main()//main funtion 
{
    float a,b,c;
    printf("\n enter the values of a,b and c");
    scanf("%f %f %f",&a,&b,&c);
    rootsofquadratic(a,b,c);
    getch();
    return 0;
}
void rootsofquadratic(float a,float b,float c)//function to find roots
{
    float d,deno,r1,r2;
    d=(b*b)-(4*a*c);
    deno=2*a;
    if(d>0)
    {
        printf("\n real roots");
        r1=(-b+sqrt(d))/deno;
        r2=(-b-sqrt(d))/deno;
        printf("\n root 1=%f \t root 2=%f",r1,r2);
    }
    else if (d==0)
    {
        printf("\n equal roots");
        r1=-b/deno;
        printf("root1=root2=%f",r1);
    }
    else 
    {
        printf("imaginary roots");
    
    }
    
}
