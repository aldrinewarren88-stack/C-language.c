/*
NAME:ALDRINE WARREN
REG NO:PA106/G/28818/25
DESCRIPTION:PROGRAM TO CALCULATE QUARATIC FUNCTIONS

*/
//ESSENTIAL PRE PROCESSOR DIRECTIVE
#include <stdio.h>
#include <math.h>
//MAIN FUNCTION
int main() {
 //DECLARATION OF VARIABLES
 double a,b,c,discriminant,first_x,second_x;
 printf("Enter the value of a: ");
 scanf("%lf",&a);
 printf("Enter the value of b: ");
 scanf("%lf",&b);
 printf("Enter the value of c: ");
 scanf("%lf",&c);
 discriminant = sqrt(b*b - 4*a*c);

 //calculating different values of x
 first_x=("-b/2a-discriminant/2a",a);
 second_x=("-b/2a+discriminant/2a",a);

// discriminant = sqrt((pow(b,2))-(4*a*c));

 //first_x=(-b+discriminant)/(2*a);

// second_x=(-b-discriminant)/(2*a);

 printf("%lf\n",first_x);
 printf("%lf",second_x);

 return 0;
}
