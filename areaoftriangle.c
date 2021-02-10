#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{ float side1, side2, side3, s, area;
   printf("Enter the length of first side of triangle=");
   scanf("%f", &side1);
   printf("Enter the length of second side of the triangle=");
   scanf("%f", &side2);
   printf("Enter the length of third side of the triangle=");
   scanf("%f", &side3);
   s = (side1 +side2 +side3)/2.0;
   area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
   printf("Area of triangle=%f", area);
   return 0;
}