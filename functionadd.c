/*
 */
#include <stdio.h>
//function prototype
int addition (int x,int y);

void main() {
    int result, result1,result2;
    //function call
    result = addition(2,3);
    result1 = addition(3,5);
    result2 = addition(4,7);

    printf("sum is %d\n",result);
    printf("sum is %d\n",result1);
    printf("sum is %d\n",result2);
}
// function declaration ,template
int addition (int x,int y) {
    int sum ;
    sum = x + y;
    return sum;
}