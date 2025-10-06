/*
 *NAME:
 *REG NO:
 *DESCRIPTION:PROGRAM TO SHOW DIVISIBILITY
 */
#include<stdio.h>
int main () {
int x;
   int y;
    //prompting user to enter the two values
    printf("Enter a number X: ");
    scanf("%d", &x);
    printf("Enter a number Y: ");
    scanf("%d", &y);

    //divisibility test
    if(x%y>0) {
        printf("%d is divisible by %d.", x, y);
    }
    else {
        printf("%d is not divisible by %d.", x, y);
    }

    return 0;
}